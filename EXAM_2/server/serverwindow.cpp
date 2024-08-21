#include "serverwindow.h"
#include "ui_serverwindow.h"

#define SERVER_PORT 64000

ServerWindow::ServerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ServerWindow)
{
    ui->setupUi(this);
    m_tcpServer = new QTcpServer(this);
    if (!m_tcpServer->listen(QHostAddress::Any,SERVER_PORT)) {
        QMessageBox::critical(this, qApp->applicationName(),
                              tr("Unable to start the server: %1.")
                              .arg(m_tcpServer->errorString()));
        close();
        return;
    }
    QString ipAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // use the first non-localhost IPv4 address
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
            ipAddressesList.at(i).toIPv4Address()) {
            ipAddress = ipAddressesList.at(i).toString();
            break;
        }
    }
    // if we did not find one, use IPv4 localhost
    if (ipAddress.isEmpty())
        ipAddress = QHostAddress(QHostAddress::LocalHost).toString();
    ui->lblStatus->setText((tr("The tcp server of %1 is running!  "
                                    "connect to %2:%3 or 127.0.0.1:%3\n").arg(qApp->applicationName()).arg(ipAddress).arg(m_tcpServer->serverPort())));
    connect(m_tcpServer,SIGNAL(newConnection()),this,SLOT(newConnection()));

    m_timer.setInterval(400);
    connect(&m_timer, SIGNAL(timeout()),this,SLOT(sendDataToClients()));
    m_timer.start();
}

ServerWindow::~ServerWindow()
{
    delete ui;
}

QString ServerWindow::toHexEditFormat(QByteArray ba)
{
    QString ret = "Offset(h) 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F  Gedecodeerd als ASCII\n";
    QByteArray hex;
    int i = 0;
    while(ba.size()){
        hex = ba.left(16);
        ba = ba.mid(16);
        ret.append(tr("%1  ").arg(i, 8, 16, QChar('0')));
        i+=16;
        ret.append(hex.toHex(' '));
        ret.append(QByteArray((16-hex.size())*3,' '));
        ret.append("  ");
        for(int i = 0; i<hex.size(); i++){
            if(hex.at(i)>=' ' && hex.at(i)<='~'){
                ret.append(hex.at(i));
            }else{
                ret.append('.');
            }
        }
        ret.append("\n");
    }
    return ret;
}

void ServerWindow::generateNewData()
{
    if(!ui->cbRandom->isChecked()){
        m_clientData << QPoint(100,-100) << QPoint(-100,-100)
                     << QPoint(-100,100) << QPoint(100,100) << QPoint(100,-100);
        return;
    }
    //TODO round to nearest:
    int numberOfPoints = QRandomGenerator::global()->bounded(60) + 4;
    numberOfPoints &= 0xFFFFFFFE;
    static int figuur = 0;//QRandomGenerator::global()->bounded(4);

    for (int i = 0; i < numberOfPoints; i++) {
        if(figuur == 0){
            //Cirkel
            m_clientData.append(
                QPoint(qCos((i / ((qreal)numberOfPoints)) * 6.28) * 250,
                       qSin((i / ((qreal)numberOfPoints)) * 6.28) * 250));
        }
        if(figuur == 1){
            // Figure 8
            m_clientData.append(
                QPoint(qSin((i / ((qreal)numberOfPoints)) * 6.28) * 250,
                       qSin(((i * 2)/((qreal)numberOfPoints)) * 6.28) * 250));
        }

        if(figuur == 2){
            //zon of ster
            m_clientData.append(
                QPoint(qCos((i / ((qreal)numberOfPoints)) * 6.28) * (100+150*(i&1)),
                       qSin((i / ((qreal)numberOfPoints)) * 6.28) * (100+150*(i&1))));
        }

        if(figuur == 3){
            // Heart
            qreal t = (i / ((qreal)numberOfPoints)) * 6.28;
            qreal x = 16.0 * qPow(qSin(t),3);
            qreal y = 13.0 * qCos(t) - 5.0 * qCos(2.0 * t) - 2.0 * qCos(3.0 * t) - qCos(4.0 * t);
            m_clientData.append(
                QPoint(x * 15.0,y * -15.0));
        }
    }
    m_clientData.append(m_clientData.first());
    figuur = (figuur+1)%4; //Fake random ;-)
}

void ServerWindow::newConnection()
{
    QTcpSocket * sock = m_tcpServer->nextPendingConnection();
    m_clientList.append(sock);
    connect(sock, SIGNAL(disconnected()), this, SLOT(closeConnection()));
    connect(sock, SIGNAL(readyRead()), this, SLOT(clientData()));
    sock->setProperty("id", m_sockId++);
    APLOG2(tr("New connection from %1").arg(sock->peerAddress().toString()));
}

void ServerWindow::closeConnection()
{
    //Ik werk met sender zodat de student met lambda's kan werken.
    QTcpSocket *sock = qobject_cast<QTcpSocket * >(sender());
    if (!sock){
        QD << "ERROR: sommething other than an QTcpSocket is connected to this slot or this slot is called as a function";
        return;
    }
    m_clientList.removeAll(sock);
    APLOG2(tr("Client closed the connection"));
    sock->deleteLater();
}

void ServerWindow::clientData()
{
    //Ik werk met sender zodat de student met lambda's kan werken.
    QTcpSocket *sock = qobject_cast<QTcpSocket * >(sender());
    if (!sock){
        QD << "ERROR: sommething other than an QTcpSocket is connected to this slot or this slot is called as a function";
        return;
    }
    QByteArray ba = sock->readAll();
    APLOG2(tr("Recieved data: \n") % toHexEditFormat(ba));
}

void ServerWindow::sendDataToClients()
{
    foreach(QTcpSocket * sock, m_clientList){
        if(sock->state() == QTcpSocket::ConnectedState){
            if(!m_clientData.size()){
                sock->write("clear\n");
                APLOG2(tr("sending data: clear\\n"));
            }else{
                QPoint newPoint = m_clientData.first();
                QByteArray buffer("point(");
                buffer.append(QByteArray::number(newPoint.x()));
                buffer.append(",");
                buffer.append(QByteArray::number(newPoint.y()));
                buffer.append(")\n");
                if(ui->cbNetwork->isChecked()){
                    //simulate slow network
                    int splitIndex = QRandomGenerator::global()->bounded(buffer.size()-2)+1;
                    sock->write(buffer.left(splitIndex));
                    APLOG2(tr("sending data: %1").arg(buffer.left(splitIndex)));
                    //QThread::msleep(50);
                    sock->flush();
                    sock->write(buffer.mid(splitIndex));
                    APLOG2(tr("sending data: %1").arg(buffer.mid(splitIndex).replace("\n","\\n")));
                }else{
                    //reliable and fast network
                    sock->write(buffer);
                    APLOG2(tr("sending data: %1").arg(buffer.replace("\n","\\n")));
                }
            }
        }
    }
    if(m_clientData.size()){
        m_clientData.pop_front();
    }else{
        generateNewData();
    }
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_tcpsocket = new QTcpSocket(this);
    // m_pointWidget = new pointWidget(this);
    connect(m_tcpsocket, &QTcpSocket::connected, this, &MainWindow::isConnected);
    connect(m_tcpsocket, &QTcpSocket::disconnected, this, &MainWindow::isDisconnected);
    connect(m_tcpsocket, &QTcpSocket::readyRead, this, &MainWindow::isReading);
}

MainWindow::~MainWindow()
{
    delete ui;
}



// Connect Client with server
void MainWindow::on_PB_connect_clicked()
{

    if(!m_tcpsocket->isOpen()) {
        connect(m_tcpsocket, &QTcpSocket::connected, this, &MainWindow::isConnected);
        m_tcpsocket->connectToHost(ui->LE_host->text(), ui->SB_port->value());
        ui->L_connectionStatus->setText("Connecting...");
    } else {
        connect(m_tcpsocket, &QTcpSocket::disconnected, this, &MainWindow::isDisconnected);
        m_tcpsocket->close();
    }

}

// Succesfull connection (change label)
void MainWindow::isConnected()
{
    ui->L_connectionStatus->setText("Status: CONNECTED");
    ui->LE_host->setEnabled(false);
    ui->SB_port->setEnabled(false);
    ui->PB_connect->setText("Disconnect");
}

// Disconnect from server
void MainWindow::isDisconnected()
{
    // emit checkConnection(m_tcpsocket->isOpen());
    ui->L_connectionStatus->setText("Status: NOT CONNECTED");
    ui->LE_host->setEnabled(true);
    ui->SB_port->setEnabled(true);
    ui->PB_connect->setText("Connect");
}

// Retrieves the data from the server
void MainWindow::isReading()
{
    QByteArray data = m_tcpsocket->readLine(0);
    qDebug() << "DATA FROM SERVER: " << data;
    QPoint *point = new QPoint();

    point->setX(100);
    point->setY(100);

    // m_pointWidget->addPoint(*point);
    ui->widget->addPoint(*point);
}

void MainWindow::changeConnection(bool status)
{
    qDebug() << status;
}

// MENU BAR ACTIONS
void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}

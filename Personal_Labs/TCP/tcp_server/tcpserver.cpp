#include "tcpserver.h"
#include "testclient.h"
#include "ui_tcpserver.h"
#include <QTextStream>
#include <QDebug>

tcpServer::tcpServer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tcpServer)
    , m_tcpServer(new QTcpServer(this))
{
    ui->setupUi(this);
    connect(m_tcpServer, &QTcpServer::newConnection, this, &tcpServer::newConnection);
}

tcpServer::~tcpServer()
{
    delete ui;
}

void tcpServer::startServer()
{
    // This method might be used to start the server programmatically.
    if (!m_tcpServer->listen(QHostAddress::Any, 6164)) {
        ui->LW_Result->addItem("Server Could Not Start");
        QTextStream(stdout) << "Server Could Not Start" << Qt::endl;
    } else {
        ui->LW_Result->addItem("Server Started on port 6164");
        QTextStream(stdout) << "Server Started on port 6164" << Qt::endl;
    }
}

void tcpServer::newConnection()
{
    QTcpSocket *clientSocket = m_tcpServer->nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, this, &tcpServer::readData);
    ui->LW_Result->addItem("New Client Connected");
}

void tcpServer::readData()
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket *>(sender());
    if (!clientSocket)
        return;

    QByteArray data = clientSocket->readAll();
    QString receivedData = QString::fromUtf8(data);
    ui->LW_Result->addItem("Received: " + receivedData);
    QTextStream(stdout) << "Received from client: " << receivedData << Qt::endl;
}

void tcpServer::on_PB_connect_clicked()
{
    startServer();
    ui->PB_connect->setEnabled(false);
}

void tcpServer::on_PB_disconnect_clicked()
{
    if (m_tcpServer->isListening()) {
        m_tcpServer->close();
        ui->LW_Result->addItem("Closing Server...");
        ui->PB_connect->setEnabled(true);
    } else {
        ui->LW_Result->addItem("Server not running");
    }
}

void tcpServer::on_PB_ClearResults_clicked()
{
    ui->LW_Result->clear();
}

void tcpServer::on_PB_connectClient_clicked()
{
    if(!m_tcpServer->isListening()) {
        ui->LW_Result->addItem("Server is not Running!");
    } else {
        qDebug() << "Pressed Client connection";
        testClient *client = new testClient(this); // Ensure the client lives long enough
        client->connectToServer("localhost", 6164);
    }
}

void tcpServer::AddMessage(QString msg)
{
    ui->LW_Result->addItem(msg);
}

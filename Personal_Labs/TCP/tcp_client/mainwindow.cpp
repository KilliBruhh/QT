#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect(m_socket, &QTcpSocket::connected, this, &MainWindow::onSocketConnected);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PB_connectClient_clicked()
{
    qDebug() << "Connect button pressed";
    QHostAddress address = QHostAddress::LocalHost;
    quint16 port = 6164;
    m_socket->connectToHost(address, port);
    /*
    try {
        QHostAddress address = QHostAddress::LocalHost;
        quint16 port = 6164;
        if (m_socket) {
            m_socket->connectToHost(address, port);
        } else {
            // Handle the case where m_socket is null
            qDebug() << "Socket is null!";
        }
    } catch (const std::exception& e) {
        // Handle any exceptions that occur during the connection attempt
        qDebug() << "Exception caught: " << e.what();
    }
*/
}

void MainWindow::onSocketConnected()
{
    qDebug() << "Connected to server!";
}


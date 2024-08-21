#include "testclient.h"
#include <QTextStream>
#include <QTimer>
#include <QDebug>

testClient::testClient(QObject *parent)
    : QObject{parent}
{
    connect(m_tcpSocket, &QTcpSocket::connected, this, &testClient::onConnected);
    connect(m_tcpSocket, &QTcpSocket::readyRead, this, &testClient::onReadyRead);
    connect(m_tcpSocket, &QTcpSocket::disconnected, this, &testClient::onDisconnection);
    connect(m_tcpSocket, QOverload<QAbstractSocket::SocketError>::of(&QTcpSocket::errorOccurred), this, &testClient::onErrorOccurred);
    qDebug() << "Client created and signals connected.";
}

void testClient::connectToServer(const QString &host, quint16 port)
{
    qDebug() << "Attempting to connect to server at" << host << "on port" << port;
    m_tcpSocket->connectToHost(host, port);

    QTimer::singleShot(5000, this, [this]() {
        if (m_tcpSocket->state() != QTcpSocket::ConnectedState) {
            QTextStream(stdout) << "Failed to connect to server: " << m_tcpSocket->errorString() << Qt::endl;
            qDebug() << "Connection failed: " << m_tcpSocket->errorString();
        }
    });
}

void testClient::onConnected()
{
    qDebug() << "Connected to server.";
    m_tcpSocket->write("Hello Server");
}

void testClient::onReadyRead()
{
    QByteArray data = m_tcpSocket->readAll();
    QTextStream(stdout) << "Received from server: " << data << Qt::endl;
    qDebug() << "Received data from server:" << data;
}

void testClient::onDisconnection()
{
    QTextStream(stdout) << "Disconnected from server." << Qt::endl;
    qDebug() << "Disconnected from server.";
}

void testClient::onErrorOccurred(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError);
    QTextStream(stdout) << "Socket error: " << m_tcpSocket->errorString() << Qt::endl;
    qDebug() << "Socket error occurred:" << m_tcpSocket->errorString();
}

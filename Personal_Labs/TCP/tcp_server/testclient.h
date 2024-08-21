#ifndef TESTCLIENT_H
#define TESTCLIENT_H

#include <QObject>
#include <QTcpSocket>

class testClient : public QObject
{
    Q_OBJECT

public:
    explicit testClient(QObject *parent = nullptr);
    void connectToServer(const QString &host, quint16 port);

private slots:
    void onConnected();
    void onReadyRead();
    void onDisconnection();
    void onErrorOccurred(QAbstractSocket::SocketError socketError);

private:
    QTcpSocket *m_tcpSocket = new QTcpSocket(this); // Initialize the socket here
};

#endif // TESTCLIENT_H

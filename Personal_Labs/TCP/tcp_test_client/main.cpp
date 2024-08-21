#include "testclient.h"

#include <QApplication>
#include <QCoreApplication>
#include <QTcpSocket>
#include <QTextStream>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testClient w;
    w.show();

    QCoreApplication a(argc, argv);
    QTcpSocket m_socket;
    QTextStream qin(stdin), qout(stdout);

    QObject::connect(&socket, &QTcpSocket::connected, [&]() {
        qout << "Connected to server." << endl;
        socket.write("Hello Server");
    });

    QObject::connect(&socket, &QTcpSocket::readyRead, [&]() {
        QByteArray data = socket.readAll();
        qout << "Received from server: " << data << endl;
    });

    QObject::connect(&socket, &QTcpSocket::disconnected, [&]() {
        qout << "Disconnected from server." << endl;
        a.quit();
    });

    socket.connectToHost("127.0.0.1", 6164);

    QTimer::singleShot(5000, [&]() {
        if (socket.state() != QTcpSocket::ConnectedState) {
            qout << "Failed to connect to server." << endl;
            a.quit();
        }
    });

    return a.exec();
}

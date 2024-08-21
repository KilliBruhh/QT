# Tcp server - HOst
# How do tcp servers work in qt and how do i create one (chatGBT)

- In Qt, you can create TCP servers using the Qt Network module, which provides classes for network programming. The QTcpServer class is the main class you'll use to create a TCP server.
- Here is a step b step guide

## 1. Include the necessary headers in your code:
```cpp
#include <QTcpServer>
#include <QTcpSocket>
```

## 2. Create an instance of **QTcpServer** in your class:
- Declare variable in header
```cpp
QTcpServer *server;
```

## 3. In your class constructor or initialization function, create and start the server:
```cpp
// contructor
MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{
    tcpServer = new QTcpServer(this);
    connect(tcpServer, &QTcpServer::newConnection, this, &MyTcpServer::newConnection);

    if (!tcpServer->listen(QHostAddress::Any, 1234)) {
        qDebug() << "Failed to start server";
    } else {
        qDebug() << "Server started";
    }
}

```
## 4. Implement the newConnection() slot to handle incoming connections:
```cpp
void MyClass::newConnection()
{
    QTcpSocket *socket = server->nextPendingConnection();
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(disconnected()), socket, SLOT(deleteLater()));
}
```
## 5. Implement the readyRead() slot to handle incoming data:
```cpp
void MyClass::readyRead()
{
    QTcpSocket *socket = static_cast<QTcpSocket*>(sender());
    while (socket->bytesAvailable()) {
        QByteArray data = socket->readAll();
        // Handle the received data
    }
}
```
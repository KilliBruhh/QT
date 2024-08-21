# Tcp Server - client
## how do i add a tcp client to it

```
- To add a TCP client to your existing TCP server implementation, you can create a separate class for the client, such as MyTcpClient, and establish a connection from the client to the server.
- Here's an example of how you can modify your code to add a TCP client:
```

**Mytcpclient.h**
```cpp
#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpSocket>

class MyTcpClient : public QObject
{
    Q_OBJECT

public:
    explicit MyTcpClient(QObject *parent = nullptr);

public slots:
    void connectToServer();
    void sendData();

private:
    QTcpSocket *tcpSocket;
};

#endif // MYTCPCLIENT_H
```
- **mytcpclient.cpp**
```cpp
#include "mytcpclient.h"
#include <QDebug>

MyTcpClient::MyTcpClient(QObject *parent) : QObject(parent)
{
    tcpSocket = new QTcpSocket(this);
    connect(tcpSocket, &QTcpSocket::connected, this, &MyTcpClient::sendData);
    connect(tcpSocket, &QTcpSocket::readyRead, this, [this]() {
        QByteArray data = tcpSocket->readAll();
        qDebug() << "Received data from server:" << data;
        // Process received data from the server here
    });
    connect(tcpSocket, &QTcpSocket::disconnected, this, [this]() {
        qDebug() << "Disconnected from server";
    });
}

void MyTcpClient::connectToServer()
{
    tcpSocket->connectToHost("localhost", 1234); // Connect to the server host and port
}

void MyTcpClient::sendData()
{
    QByteArray data = "Hello from client";
    tcpSocket->write(data);
}

```

## Next, modify the MyTcpServer class to include a list of connected clients and handle incoming client connections:

**mytcpServer.h**
```cpp
#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>

class MyTcpServer : public QObject
{
    Q_OBJECT

public:
    explicit MyTcpServer(QObject *parent = nullptr);

public slots:
    void newConnection();
    void readyRead();
    void clientDisconnected();

private:
    QTcpServer *tcpServer;
    QList<QTcpSocket*> clientSockets;
};

#endif // MYTCPSERVER_H
```
**mytcpserver.cpp**
```cpp
#include "mytcpserver.h"
#include <QDebug>

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

void MyTcpServer::newConnection()
{
    QTcpSocket *clientSocket = tcpServer->nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, this, &MyTcpServer::readyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &MyTcpServer::clientDisconnected);
    clientSockets.append(clientSocket);

    qDebug() << "New client connected:" << clientSocket->peerAddress().toString();
}

void MyTcpServer::readyRead()
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket *>(sender());
    if (clientSocket) {
        QByteArray data = clientSocket->readAll();
        qDebug() << "Received data from client:" << data;

        // Process received data from the client here

        // Echo the received data back to the client
        clientSocket->write(data);
    }
}

void MyTcpServer::clientDisconnected()
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket *>(sender());
    if (clientSocket) {
        clientSockets.removeOne(clientSocket);
        clientSocket->deleteLater();
        qDebug() << "Client disconnected";
    }
}
```
**main.cpp**
```cpp
#include <QCoreApplication>
#include "mytcpserver.h"
#include "mytcpclient.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    MyTcpServer server;
    MyTcpClient client;

    // Connect the client to the server
    QObject::connect(&client, &MyTcpClient::connectToServer, &client, &MyTcpClient::connectToServer);

    // Call the client's connectToServer() slot to establish a connection
    client.connectToServer();

    return app.exec();
}

```

```
In the main.cpp file, we create instances of both MyTcpServer and MyTcpClient. The client is connected to the server using a signal-slot connection. When the connectToServer() signal is emitted, it triggers the connectToServer() slot in the client, which establishes a connection to the server.

Compile and run the program. The TCP server will start listening on port 1234, and the client will connect to the server. You can customize the logic inside the readyRead() slot of both the server and client to process the received data as per your requirements.

Please note that in this example, the client sends data to the server, and the server echoes the received data back to the client. You can modify the behavior to suit your needs.
```



# Send data from cleint on button press
## can i send data from the client when i press a button?
```
- Yes, you can send data from the client to the server when a button is pressed. To achieve this, you need to add the necessary event handling code in your client-side code to capture the button press event and initiate the data transmission to the server.

- Here's an example of how you can modify the client code to send data when a button is pressed:
```
**mytcpclient.h**
```cpp
#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpSocket>

class MyTcpClient : public QObject
{
    Q_OBJECT

public:
    explicit MyTcpClient(QObject *parent = nullptr);

public slots:
    void connectToServer();
    void sendData();

private:
    QTcpSocket *tcpSocket;
};

#endif // MYTCPCLIENT_H

```
**mytcpclient.cpp**
```cpp
#include "mytcpclient.h"
#include <QDebug>

MyTcpClient::MyTcpClient(QObject *parent) : QObject(parent)
{
    tcpSocket = new QTcpSocket(this);
    connect(tcpSocket, &QTcpSocket::connected, this, &MyTcpClient::sendData);
    connect(tcpSocket, &QTcpSocket::readyRead, this, [this]() {
        QByteArray data = tcpSocket->readAll();
        qDebug() << "Received data from server:" << data;
        // Process received data from the server here
    });
    connect(tcpSocket, &QTcpSocket::disconnected, this, [this]() {
        qDebug() << "Disconnected from server";
    });
}

void MyTcpClient::connectToServer()
{
    tcpSocket->connectToHost("localhost", 1234); // Connect to the server host and port
}

void MyTcpClient::sendData()
{
    QByteArray data = "Hello from client";
    tcpSocket->write(data);
}

```

```
In this example, we assume there is a button in the client's user interface that triggers the sendData() slot when pressed. You can connect the button's clicked() signal to the sendData() slot using Qt's signal-slot mechanism.

For example, in your client's user interface code, you can have a button object called sendButton. Connect its clicked() signal to the sendData() slot:
```
```cpp
connect(sendButton, &QPushButton::clicked, this, &MyTcpClient::sendData);
```

```
When the button is pressed, the sendData() slot will be called, and the client will send the desired data to the server using the tcpSocket->write() method.

Make sure to set up the appropriate user interface and button objects in your client code and connect the button's signal to the sendData() slot.

Compile and run the client and server applications. When you press the button on the client side, the client will send the data to the server, which can then process it accordingly in the readyRead() slot of the server implementation.
```
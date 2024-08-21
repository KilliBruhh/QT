#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QtWidgets>
#include <QtNetwork>
#define QD qDebug() << __FILE__ << __LINE__
#define APLOG1(x) ui->debug->appendPlainText(x)
#define APLOG2(x) ui->debug->appendPlainText(tr("%1) ").arg(sock->property("id").toUInt()) + (x))

namespace Ui {
class ServerWindow;
}

class ServerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServerWindow(QWidget *parent = 0);
    ~ServerWindow();
    QString toHexEditFormat(QByteArray);
    void generateNewData();
private slots:
    void newConnection();
    void closeConnection();
    void clientData();
    void sendDataToClients();

private:
    Ui::ServerWindow *ui;
    QTcpServer * m_tcpServer;
    uint32_t m_sockId = 0;
    QList <QTcpSocket*> m_clientList;
    QList <QPoint> m_clientData;
    QTimer m_timer;
};

#endif // SERVERWINDOW_H

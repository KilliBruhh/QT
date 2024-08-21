#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class tcpServer; }
QT_END_NAMESPACE

class tcpServer : public QMainWindow
{
    Q_OBJECT

public:
    tcpServer(QWidget *parent = nullptr);
    ~tcpServer();

private slots:
    void startServer();
    void newConnection();
    void readData();
    void on_PB_connect_clicked();
    void on_PB_disconnect_clicked();
    void on_PB_ClearResults_clicked();
    void on_PB_connectClient_clicked();
    void AddMessage(QString msg);

private:
    Ui::tcpServer *ui;
    QTcpServer *m_tcpServer;
};

#endif // TCPSERVER_H

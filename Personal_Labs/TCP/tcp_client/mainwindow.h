#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "QTcpSocket"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    // void connectToServer(const QString &address, quint16 port);
    // void sendData(const QByteArray &data);

private slots:
//    void onConnected();
//    void onDisconnected();
//    void onError(QAbstractSocket::SocketError socketError);
//    void onReadyRead();
    void onSocketConnected();
    void on_PB_connectClient_clicked();

private:
    Ui::MainWindow *ui;
    MainWindow * m_client;
    QTcpSocket * m_socket;


};
#endif // MAINWINDOW_H

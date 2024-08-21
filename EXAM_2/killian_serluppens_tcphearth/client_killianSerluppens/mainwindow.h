#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "pointwidget.h"

#include <QMainWindow>
#include <QTcpSocket>

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
    void isConnected();
    void isDisconnected();
    void changeConnection(bool status);
    void isReading();
signals:
    void checkConnection(bool status);


private slots:
    void on_actionExit_triggered();
    void on_PB_connect_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket *m_tcpsocket;
    pointWidget *m_pointWidget;

};
#endif // MAINWINDOW_H

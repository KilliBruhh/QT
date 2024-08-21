#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include "QSpinBox"

namespace Ui {
class SecondWIndow;
}

class MainWindow;

class SecondWIndow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWIndow(QWidget *parent = nullptr);
    ~SecondWIndow();

signals:
    void sendData(int value);

private slots:
    void on_PB_sendData_clicked();

private:
    Ui::SecondWIndow *ui;
    MainWindow * m_mainWindow;

};

#endif // SECONDWINDOW_H

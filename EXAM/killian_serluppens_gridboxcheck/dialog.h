#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>

#include "mainwindow.h"

namespace Ui {
class Dialog;
}

class Dialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_PB_Ok_clicked();

    void on_PB_Cancel_clicked();

private:
    Ui::Dialog *ui;
    MainWindow * m_mw;
    int m_colums;
    int rows;
};

#endif // DIALOG_H

#include "secondwindow.h"
#include "ui_secondwindow.h"

#include "mainwindow.h"

SecondWIndow::SecondWIndow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWIndow)
{
    ui->setupUi(this);
}

SecondWIndow::~SecondWIndow()
{
    delete ui;
}

void SecondWIndow::on_PB_sendData_clicked()
{
    int value = ui->SB_data->value();
    emit sendData(value);
    qDebug() << "Sending data";

}



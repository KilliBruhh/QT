#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

// Butten Actions
void Dialog::on_PB_Ok_clicked()
{
    qDebug() << "OK PushButton Pressed";
    m_colums = ui->SB_Colums->value();
    if(ui->SB_Colums->value() == 0 || ui->SB_Rows->value() == 0) {
        qDebug() << "YOU CANT HAVE A 0 AS A ROW/COLUM";
    } else {
        qDebug() << "C: " << ui->SB_Colums->value() << " R: " << ui->SB_Rows->value();
        // m_mw->activateCheckBoxWidget(ui->SB_Colums->value(), ui->SB_Rows->value());

    }
}


void Dialog::on_PB_Cancel_clicked()
{
    qDebug() << "Cancel PushButton Pressed";
}


#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ok_clicked()
{
    QHBoxLayout *lay = new QHBoxLayout(ui->gb_TestArea);
    m_sliderArray = new SliderArray(ui->spinBox->value(), ui->gb_TestArea);
    lay->addWidget(m_sliderArray);
}


void MainWindow::on_pb_save_clicked()
{
    QList<int> values = m_sliderArray->data();
    QString stringValue;
    foreach (int value, values) {
        stringValue.append(QString::number(value));
        stringValue.append(", ");
    }
    ui->listWidget->addItem(stringValue);
}


void MainWindow::on_pb_cycle_clicked()
{

}


void MainWindow::on_pb_delete_clicked()
{

}


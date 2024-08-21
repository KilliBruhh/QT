#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "sliderarray.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sliderArrayWidget = new SliderArray(this);

    // Connect the signal from the SliderArray instance to the saveSliderValue slot
    connect(sliderArrayWidget, &SliderArray::sliderValueChanged, this, &MainWindow::saveSliderValue);

    connect(ui->submit_sliders, &QPushButton::clicked, this, &MainWindow::on_submit_sliders_clicked);
}

void MainWindow::on_submit_sliders_clicked()
{
    qDebug() << ui->amt_sliders->value();
}

void MainWindow::on_saveStepButton_clicked()
{
    qDebug() << "Pushed Save Step Button";

}

void MainWindow::saveSliderValue(int value)
{

}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sliderarray.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ui->groupBox_2->setVisible(false);
    // ui->groupBox_3->setVisible(false);
    connect(ui->submit_amt_button, &QPushButton::clicked, this, &MainWindow::onSubmitButtonClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onSubmitButtonClicked()
{
    // Ensure that the layout is properly set up beforehand
    if(ui->slider_widget->layout() == nullptr) {
        QVBoxLayout *sliderWidgetLayout = new QVBoxLayout(ui->slider_widget);
        ui->slider_widget->setLayout(sliderWidgetLayout);
    }

    qDebug() << ui->amt_slider->value();
    int amountOfSliders = ui->amt_slider->value(); // Get the value from the slider
    sliderArray *sliders = new sliderArray(amountOfSliders);

    // Get the layout of the slider_widget
    QVBoxLayout *sliderWidgetLayout = qobject_cast<QVBoxLayout*>(ui->slider_widget->layout());

    // Add the sliders to the layout of the slider_widget
    sliderWidgetLayout->addWidget(sliders);

    // Optionally, set the layout for slider_widget explicitly if it doesn't have one
    ui->slider_widget->setLayout(sliderWidgetLayout);
}


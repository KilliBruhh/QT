#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QListWidget"
#include "secondwindow.h"


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

void MainWindow::addDataToListView() {

}

void MainWindow::on_PB_openWindow_clicked()
{
    m_secondWindow = new SecondWIndow(this); // Ensure we create a new window instance
    qDebug() << "Opened Second window";
    connect(m_secondWindow, &SecondWIndow::sendData, this, &MainWindow::handleData);
    m_secondWindow->activateWindow();
    m_secondWindow->show();
}

void MainWindow::handleData(int value)
{
    qDebug() << "data recieved " << value;
    ui->LW_result->addItem(QString::number(value));
}

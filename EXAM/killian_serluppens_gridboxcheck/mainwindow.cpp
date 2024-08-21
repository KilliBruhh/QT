#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialog.h"

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

// Menu Actions
void MainWindow::on_actionPreferences_triggered()
{
    qDebug() << "Preference Menu Tab Pressed";
    Dialog d;
    MainWindow m;
    d.activateWindow();
    d.show();
}

void MainWindow::on_actionExit_triggered()
{
    qDebug() << "Exit Menu Tab Pressed";
    QApplication::exit();
}

void MainWindow::on_actionSave_Data_triggered()
{
    qDebug() << "Save Menu Tab Pressed";
}

void MainWindow::on_actionLoad_Data_triggered()
{
    qDebug() << "Load Menu Tab Pressed";
}

/*
 * This is the code I tried using with the use of the Dialog Modal.
 * Every time i tried to create the HBoxLayout it crashes with no error messages / crash reports
 * I did not find the solution
void MainWindow::activateCheckBoxWidget(int c, int r)
{
    startCBW();
}
void MainWindow::startCBW() {
    qDebug() << "Activated activateCheckBoxWidged";
                                                                // Keeps Craching when trying to create the layout
    QHBoxLayout * lay = new QHBoxLayout(ui->GB_Field);
    qDebug() << "Created Layout";
    m_cbg = new CheckBoxGrid(2, 2, ui->GB_Field);
    qDebug() << "Created CheckBoxGrid";
    lay->addWidget(m_cbg);
    qDebug() << "Added CheckBoxGrid to layout";
}
*/

// Het gebruiken van de Modal liet mijn programma crashen (toen ik hier aan begon)
// hierbij dus een alternatief om met dummy data het raster aan te maken
void MainWindow::on_PB_Test_clicked()
{
    QHBoxLayout * lay = new QHBoxLayout(ui->GB_Field);
    m_cbg = new CheckBoxGrid(5, 5, ui->GB_Field);
    lay->addWidget(m_cbg);
}

void MainWindow::setCols(int data) {
    m_cols = data;
}
int MainWindow::getCols() {
    return m_cols;
}
void MainWindow::setRows(int data) {
    m_rows = data;
}
int MainWindow::getRows() {
    return m_rows;
}


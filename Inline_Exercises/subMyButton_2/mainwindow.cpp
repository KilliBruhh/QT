#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->TestAreaGB->setVisible(false);
    ui->ButtonsGB->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_amtSliders_clicked() // QPushButton OK
{
    qDebug() << "Pressed pb_amtSliders";
    ui->TestAreaGB->setVisible(true);
    ui->ButtonsGB->setVisible(true);
    ui->InitGB->setVisible(false);
    QHBoxLayout * lay = new QHBoxLayout(ui->TestAreaGB);
    m_sliderArray = new SliderArray(ui->spinBox->value(), ui->TestAreaGB);
    lay->addWidget(m_sliderArray);
}


void MainWindow::on_pb_saveStep_clicked()   // QPushButton SaveStep
{
    qDebug() << "Pressed pb_saveStep";
    QList<int> values = m_sliderArray->data();
    QString stringValue;
    foreach (int value, values) {
        stringValue.append(QString::number(value));
        stringValue.append(",");
    }
    ui->listWidget->addItem(stringValue);
}


void MainWindow::on_cyclePB_clicked()   // QPushButton Cycle through Steps
{
    qDebug() << "Pressed cyclePB";
    QListWidgetItem * selectedItem = ui->listWidget->currentItem();
    int total = ui->listWidget->count();
    if(selectedItem) {
        if(ui->listWidget->row(selectedItem)==total) {
            ui->listWidget->setCurrentRow(0);
        } else {
            ui->listWidget->setCurrentRow(ui->listWidget->row(selectedItem)+1);
        }
    } else {
        ui->listWidget->setCurrentRow(0);
    }
}


void MainWindow::on_deletePB_clicked()  // QPushButton Delete
{
    qDebug() << "Pressed deletePB";
    QListWidgetItem * selectedItem = ui->listWidget->currentItem();
    if (selectedItem) {
        delete ui->listWidget->takeItem(ui->listWidget->row(selectedItem));
    }
}

/*
void MainWindow::on_actionSave_triggered()
{
    qDebug() << "Action Save Pressed";
    saveCount++;
    QString filename = "Slidersave_" + QString::number(*saveCount) + ".txt";
    QFile file("sliderSave");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        foreach (int slider, m_sliderArray) {
            out << slider;
            file.close();
        }
    }
}

*/

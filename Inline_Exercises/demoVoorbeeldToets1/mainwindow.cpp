#include "mainwindow.h"
#include "ui_mainwindow.h"

/*
 * Deze code is samen opgebouwd tijdens de les van 17/04/2024 als aanzet tot het oplossen van de eerste voorbeeldtoets
 * De code is niet af, maar bevat wel de eerste grote blokken.
 */

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gbButtons->setVisible(false);
    ui->gbTestArea->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbOk_clicked()
{
    ui->gbButtons->setVisible(true);
    ui->gbTestArea->setVisible(true);
    ui->gbInit->setVisible(false);
    QHBoxLayout * lay = new QHBoxLayout(ui->gbTestArea);
    m_sa = new SliderArray(ui->spinBox->value(), ui->gbTestArea);
    lay->addWidget(m_sa);
}

void MainWindow::on_pbSave_clicked()
{
    QList<int> values = m_sa->data();
    QString strValues;
    foreach(int value, values){
        strValues.append(QString::number(value));
        strValues.append(", ");
    }
    ui->listWidget->addItem(strValues);
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString fromList = item->text();
    QStringList stringValues = fromList.split(", ", Qt::SkipEmptyParts);
    QList <int> values;
    foreach(QString stringValue, stringValues){
        int value = stringValue.toInt();
        values.append(value);
    }
    m_sa->setData(values);
}




#include "mainwindow.h"

#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Create widgets
    QLineEdit *lineEdit = new QLineEdit(centralWidget);
    QPushButton *pushButton = new QPushButton("Zoek", centralWidget);

    // Create layout
    QHBoxLayout *layout = new QHBoxLayout(centralWidget);
    layout->addWidget(lineEdit);
    layout->addWidget(pushButton);
}

MainWindow::~MainWindow() {}

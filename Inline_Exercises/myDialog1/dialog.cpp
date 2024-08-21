#include "dialog.h"
#include "ui_dialog.h"
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QHBoxLayout>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QLineEdit *m_lineEdit = new QLineEdit();
    QPushButton *m_pushButton = new QPushButton("Zoek");
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(m_lineEdit);
    layout->addWidget(m_pushButton);
    setLayout(layout);
}

Dialog::~Dialog()
{
    delete ui;
}

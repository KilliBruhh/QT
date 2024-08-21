#include "testclient.h"
#include "ui_testclient.h"

testClient::testClient(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testClient)
{
    ui->setupUi(this);
}

testClient::~testClient()
{
    delete ui;
}

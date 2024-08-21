#ifndef TESTCLIENT_H
#define TESTCLIENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class testClient;
}
QT_END_NAMESPACE

class testClient : public QMainWindow
{
    Q_OBJECT

public:
    testClient(QWidget *parent = nullptr);
    ~testClient();

private:
    Ui::testClient *ui;
};
#endif // TESTCLIENT_H

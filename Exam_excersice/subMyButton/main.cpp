#include "mainwindow.h"
#include "sliderarray.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    sliderArray s(1);
    w.show();
    return a.exec();
}

#include "mainwindow.h"
#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Dialog d;

    w.show();
    d.show();



    return a.exec();
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sliderarray.h"
#include <QMainWindow>
#include <QFile>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_amtSliders_clicked();

    void on_pb_saveStep_clicked();

    void on_cyclePB_clicked();

    void on_deletePB_clicked();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
    SliderArray * m_sliderArray;
    int * saveCount = 0;

};
#endif // MAINWINDOW_H

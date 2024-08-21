#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sliderarray.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ok_clicked();
    void on_pb_save_clicked();
    void on_pb_cycle_clicked();
    void on_pb_delete_clicked();

private:
    Ui::MainWindow *ui;
    SliderArray * m_sliderArray;
};
#endif // MAINWINDOW_H

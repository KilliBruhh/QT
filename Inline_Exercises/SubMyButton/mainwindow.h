#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sliderarray.h"

#include <QMainWindow>
#include <QGroupBox> // Include necessary headers

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
    void saveSliderValue(int value);
    void on_saveStepButton_clicked();

private:
    Ui::MainWindow *ui;

    SliderArray *sliderArrayWidget; // custom wiget SliderArray

    QGroupBox *groupBox_2; // Assuming groupBox_2 is a member of MainWindow

    int calculateNumSliders(); // Declare the function to calculate the number of sliders
    void on_submit_sliders_clicked();

};
#endif // MAINWINDOW_H

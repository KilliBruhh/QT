#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "checkboxgrid.h"
#include "QHBoxLayout"

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
    void setCols(int data);
    int getCols();
    void setRows(int data);
    int getRows();



private slots:
    void on_actionPreferences_triggered();

    void on_actionExit_triggered();

    void on_actionSave_Data_triggered();

    void on_actionLoad_Data_triggered();

    void on_PB_Test_clicked();

    // void startCBW();

public slots:
   // void activateCheckBoxWidget(int cols, int rows);


signals:
private:
    Ui::MainWindow *ui;
    CheckBoxGrid * m_cbg;
    int m_rows;
    int m_cols;
};
#endif // MAINWINDOW_H

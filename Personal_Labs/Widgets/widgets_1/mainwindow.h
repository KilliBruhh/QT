#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QStringListModel>
#include <QMainWindow>

#include "QListView"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class SecondWIndow;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void addDataToListView();

private slots:
    void on_PB_openWindow_clicked();
    void handleData(int value);

private:
    Ui::MainWindow *ui;
    SecondWIndow *m_secondWindow;  // Proper class name
    QStringListModel *model; // Model for the QListView
};
#endif // MAINWINDOW_H

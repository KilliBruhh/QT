#ifndef MANUALWIDGET_H
#define MANUALWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

class ManualWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ManualWidget(QWidget *parent = nullptr);
private:
    QLabel* n_label;
    QPushButton* n_button;
    QLineEdit* n_lineEdit;
signals:
};

#endif // MANUALWIDGET_H

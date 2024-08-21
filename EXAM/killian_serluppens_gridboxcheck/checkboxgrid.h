#ifndef CHECKBOXGRID_H
#define CHECKBOXGRID_H

#include <QWidget>
#include "QHBoxLayout"
#include "QCheckBox"
#include "QGridLayout"

class CheckBoxGrid : public QWidget
{
    Q_OBJECT
public:
    explicit CheckBoxGrid(int colums, int rows, QWidget *parent = nullptr);

private slots:
 void checBoxChange(/*, QCheckBox checkbox*/);

signals:
private:
    QList<QCheckBox*> m_checBoxes;
    int * countChecked;
    int * countUnhecked;
    int * totalBoxes;


};

#endif // CHECKBOXGRID_H

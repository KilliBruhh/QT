#ifndef SLIDERARRAY_H
#define SLIDERARRAY_H

#include <QWidget>
#include <QList>
#include "QHBoxLayout"
#include "QSlider"

class SliderArray : public QWidget
{
    Q_OBJECT
public:
    explicit SliderArray(int aantal, QWidget *parent = nullptr);
    QList<int> data();
    void setData(QList<int> values);
signals:
private:
    QList<QSlider*> m_sliders;
};

#endif // SLIDERARRAY_H

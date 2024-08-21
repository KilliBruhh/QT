#ifndef SLIDERARRAY_H
#define SLIDERARRAY_H

#include <QWidget>
#include <QSlider>

#include <QList>

class SliderArray : public QWidget
{
    Q_OBJECT
public:
    explicit SliderArray(int amt_sliders, QWidget *parent = nullptr);
    QList<int> data();  // Data collection from sliders
    void setData(QList<int> values);
signals:
private:
    QList<QSlider*> m_sliders;   // Slider collection


};

#endif // SLIDERARRAY_H

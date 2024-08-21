#ifndef SLIDERARRAY_H
#define SLIDERARRAY_H

#include <QWidget>

#include <QHBoxLayout>
#include <QSlider>

class sliderArray : public QWidget
{
    Q_OBJECT
public:
    explicit sliderArray(int amount,QWidget *parent = nullptr);

signals:
};

#endif // SLIDERARRAY_H

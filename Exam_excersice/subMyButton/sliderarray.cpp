#include "sliderarray.h"

sliderArray::sliderArray(int amount,QWidget *parent)
    : QWidget{parent}
{
    QHBoxLayout *layout = new QHBoxLayout(this);
    for(int i = 0; i < amount; i++) {
        QSlider *slider = new QSlider(this);
        layout->addWidget(slider);
    }
    this->setLayout(layout);
}

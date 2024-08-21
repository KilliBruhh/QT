#include "sliderarray.h"

SliderArray::SliderArray(int values, QWidget *parent)
    : QWidget{parent}
{
    QHBoxLayout * layout = new QHBoxLayout(this);
    for(int i = 0; i<values; i++) {
        QSlider * slider = new QSlider(this);
        m_sliders.append(slider);
        layout->addWidget(slider);       
    }
}

QList<int> SliderArray::data() {
    QList<int> values;
    foreach (QSlider * val, m_sliders) {
        values.append(val->value());
    }
    return values;
}

void SliderArray::setData(QList<int> values) {
    for(int i=0; i<values.length(); i++) {
        m_sliders.at(i)->setValue(values.value(i));
    }
}

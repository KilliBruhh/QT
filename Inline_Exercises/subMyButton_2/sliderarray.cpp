#include "sliderarray.h"

SliderArray::SliderArray(int amt, QWidget *parent)
    : QWidget{parent}
{
    QHBoxLayout * layout = new QHBoxLayout(this);
    for(int i=0; i<amt; i++) {
        QSlider *slider = new QSlider(this);
        layout->addWidget(slider);
        m_sliders.append(slider);
    }
}

// Return the data from the QList<int>
QList<int> SliderArray::data() {
    QList<int> values;
    foreach (QSlider * sldr, m_sliders) {
        values.append(sldr->value());
    }
    return values;
}

void SliderArray::setData(QList<int> values) {
    for (int i =0; i<values.length(); i++) {
        m_sliders.at(i)->setValue(values.at(i));
    }
}

#include "sliderarray.h"

#include <QWidget>
#include <QHBoxLayout>

SliderArray::SliderArray(int amt_sliders ,QWidget *parent)
    : QWidget{parent}
{
    QHBoxLayout * layout = new QHBoxLayout(this);
    for (int i=0; i<amt_sliders; i++) {
        QSlider *slider = new QSlider(this);
        layout->addWidget(slider);
        m_sliders.append(slider);
    }
}

QList<int> SliderArray::data() {
    QList <int> values;
    foreach (QSlider * slider, m_sliders) {
        values.append(slider->value());
    }
    return values;
}

void SliderArray::setData(QList<int> values ) {
    for (int i=0; i<values.length(); i++) {
        m_sliders.at(i)->setValue(values.at(i));
    }
}

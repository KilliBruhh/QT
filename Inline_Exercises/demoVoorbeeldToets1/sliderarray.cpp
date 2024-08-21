#include "sliderarray.h"

/*
 * Deze code is samen opgebouwd tijdens de les van 17/04/2024 als aanzet tot het oplossen van de eerste voorbeeldtoets
 * De code is niet af, maar bevat wel de eerste grote blokken.
 */

SliderArray::SliderArray(int aantal, QWidget *parent)
    : QWidget{parent}
{
    QHBoxLayout * lay = new QHBoxLayout(this);
    for(int i=0; i < aantal; i++){
        QSlider *slider = new QSlider(this);
        lay->addWidget(slider);
        m_sliders.append(slider);
    }
}

QList<int> SliderArray::data()
{
    QList<int> values;
    foreach(QSlider * slider, m_sliders){
        values.append(slider->value());
    }
    return values;
}

void SliderArray::setData(QList<int> values)
{
    for(int i = 0; i < values.length(); i++){
        m_sliders.at(i)->setValue(values.at(i));
    }
}

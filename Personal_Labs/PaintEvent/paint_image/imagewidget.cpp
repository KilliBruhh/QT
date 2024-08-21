#include "imagewidget.h"
#include <QPainter>

imageWidget::imageWidget(QWidget *parent)
    : QWidget{parent}
{
    m_pixmap.load("C:/Users/Killi/OneDrive/Documenten/School/Fase 4/QT/sun.jpg");
}

void imageWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(rect(), m_pixmap);
    QWidget::paintEvent(event);
}

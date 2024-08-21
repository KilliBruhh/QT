#include "paintwidget.h"

#include "QPainter"

paintWidget::paintWidget(QWidget *parent)
    : QWidget{parent}
{}


void paintWidget::paintEvent(QPaintEvent * event)
{
    QPainter painter(this);

    // Set text properties (optional)
    QFont font = painter.font();
    font.setPointSize(20);
    painter.setFont(font);

    // Set text color (optional)
    painter.setPen(Qt::blue);

    // Draw text
    painter.drawText(rect(), Qt::AlignCenter, "Hello, Qt!");

    // Call the base class implementation
    QWidget::paintEvent(event);
}

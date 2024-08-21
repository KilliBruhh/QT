#include "paintwidget.h"

paintWidget::paintWidget(QWidget *parent)
    : QWidget{parent}
{}

void paintWidget::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Original rectangle, unadjusted
    QRect rect = this->rect();
    painter.setBrush(Qt::NoBrush);
    painter.setPen(Qt::DashLine);
    painter.drawRect(rect);

    // Adjusted rectangle
    QRect adjustedRect = rect.adjusted(50, 50, -50, -50);
    painter.setBrush(Qt::blue);
    painter.setPen(Qt::SolidLine);
    painter.drawEllipse(adjustedRect);
}

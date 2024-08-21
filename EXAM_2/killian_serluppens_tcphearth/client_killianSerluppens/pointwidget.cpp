#include "pointwidget.h"
#include <QPainter>

pointWidget::pointWidget(QWidget *parent)
    : QWidget{parent}
{
    m_valid = false;
}


// Needs to paint the incomming points
void pointWidget::addPoint(QPoint point)
{

    m_valid = true;
    m_point = point;
    update();
    qDebug() << "---------------------------------------" << m_point.rx() << " " << m_point.ry();
}


// Clear the points INPUT --> clear\n
void pointWidget::clearPoints()
{

}

void pointWidget::paintEvent(QPaintEvent *event)
{
    // Save the previous points

    if(m_valid)
    {
        QPainter painter(this);
        // painter.setRenderHint(QPainter::Antialiasing);

        painter.setBrush(Qt::black);
        painter.setPen(Qt::black);
        QLine x = QLine();

        // x.setLine(m_point.x(), m_point.y(), 250, -250);

        x.setLine(100,100,-100,100);
        painter.drawLine(x);
        x.setLine(-100,100,-100,-100);
        painter.drawLine(x);
        x.setLine(-100,-100,100,-100);

        painter.drawLine(x);

    }
}


/*

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setBrush(Qt::black);
    painter.setPen(Qt::black);
    QLine x = QLine();
    x.setP1(point);
    x.setP2(point);
    painter.drawLine(x);
*/

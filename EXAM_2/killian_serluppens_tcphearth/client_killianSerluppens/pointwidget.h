#ifndef POINTWIDGET_H
#define POINTWIDGET_H

#include <QWidget>

#include <QPushButton>
#include <QVBoxLayout>

#include <QPoint>

#include <QPixmap>

class pointWidget : public QWidget
{
    Q_OBJECT
public:
    explicit pointWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

public slots:
    void addPoint(QPoint point);
    void clearPoints();


signals:

private:
    QPushButton *m_pushbutton;
    QPixmap m_pixmap;
    QVBoxLayout *m_layout;
    QPaintEvent *m_event;
    QPoint m_point;
    QPoint m_tempPoint;
    bool m_valid;

};

#endif // POINTWIDGET_H

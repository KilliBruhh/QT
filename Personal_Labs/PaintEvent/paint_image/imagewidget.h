#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>
#include "QPixmap"

class imageWidget : public QWidget
{
    Q_OBJECT
public:
    explicit imageWidget(QWidget *parent = nullptr);


protected:
    void paintEvent(QPaintEvent *event);

private:
    QPixmap m_pixmap;

signals:
};

#endif // IMAGEWIDGET_H

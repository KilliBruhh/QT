#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H

#include <QWidget>

#include "QPaintEvent"
#include "QPainter"

class paintWidget : public QWidget
{
    Q_OBJECT
public:
    explicit paintWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

signals:
};

#endif // PAINTWIDGET_H

#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H

#include <QWidget>

class paintWidget : public QWidget
{
    Q_OBJECT
public:
    explicit paintWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

signals:
};

#endif // PAINTWIDGET_H

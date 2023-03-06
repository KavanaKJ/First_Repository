#ifndef MYARC_H
#define MYARC_H
#include<QDebug>
#include <QQuickPaintedItem>
#include <QObject>
#include<QPainter>

class MyArc : public QQuickPaintedItem
{
    Q_OBJECT
public:
    MyArc();


    // QQuickPaintedItem interface
public:
    void paint(QPainter *painter) override;
};

#endif // MYARC_H

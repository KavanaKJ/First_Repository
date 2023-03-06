#include "MyArc.h"

MyArc::MyArc()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
}

void MyArc::paint(QPainter *painter)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    QRectF f=boundingRect();
    int startAngle = 30 * 16;
    int spanAngle = 120 * 16;
    painter->drawArc(f, startAngle, spanAngle);
}

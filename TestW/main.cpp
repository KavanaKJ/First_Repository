#include "MyWidget.h"
#include<QPushButton>
#include<QCheckBox>
#include<QRadioButton>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;

    QPushButton *qpb=new QPushButton("PushButton",&w);
    QPushButton *qpb1=new QPushButton("PushButton",&w);
    QCheckBox *qcb=new QCheckBox("checkbox",&w);
    QRadioButton *qrb=new QRadioButton("Radiobutton",&w);
  qpb->setGeometry(10,10,100,100);
  qpb1->setGeometry(120,10,100,100);
  qcb->setGeometry(230,10,100,100);
  qrb->setGeometry(320,10,100,100);

//    qpb->setGeometry(0,0,100,100);
//    qpb1->setGeometry(100,100,100,100);
//    qcb->setGeometry(200,180,100,100);
//    qrb->setGeometry(260,260,100,100);
    w.setGeometry(200,100,100,100);
    w.resize(500,500);
    w.show();

    return a.exec();
}

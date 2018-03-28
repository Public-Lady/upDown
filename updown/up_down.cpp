#include "up_down.h"
 #include <QGraphicsTextItem>
UpDown::UpDown(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *mainLayout=new QHBoxLayout(this);
    scene = new QGraphicsScene(this);
//    scene->setBackgroundBrush(QBrush(QColor(255,0,0)));
    RectDown*downWord=new RectDown;
    scene->addItem(downWord);
    scene->setSceneRect(0,0,400,600);//or alone crash or add fix size scene
    view = new QGraphicsView(scene);
    view->setFixedSize(400,600);//or add margin in y() or add fix view scene
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    downWord->setPos((view->width()/2)-(downWord->myWidth/2),0);
    mainLayout->addWidget(view);
    this->setLayout(mainLayout);
}

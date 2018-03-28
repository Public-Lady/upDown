#include "rectdown.h"
#include <QDebug>
RectDown::RectDown()
{
    m_text="some text long text";
    myWidth=m_text.size()*8;
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start( (100));
}

void RectDown::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                        QWidget *widget)
{
    this->setRect(0,0,myWidth,20);
    painter->drawText(QRect(0,0,myWidth,20),Qt::AlignCenter ,m_text.c_str());
    painter->setPen(QPen(Qt::black, 1));
    painter->drawRect(rect());
}

void RectDown::move(){
    if(y()>=(600-20)){
        this->setPos(x(),(600-20));
        timer->stop();
        return;
    }
    this->setPos(x(),y()+10);
}

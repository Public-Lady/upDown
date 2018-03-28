#include "up_down.h"
 #include <QGraphicsTextItem>
UpDown::UpDown(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *mainLayout=new QHBoxLayout(this);
    scene = new QGraphicsScene(this);
//    scene->setBackgroundBrush(QBrush(QColor(255,0,0)));

    scene->setSceneRect(0,0,900,600);//or alone crash or add fix size scene
    view = new QGraphicsView(scene);
    view->setFixedSize(900,600);//or add margin in y() or add fix view scene
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    mainLayout->addWidget(view);
    this->setLayout(mainLayout);
}

void UpDown::run(){
    RectDown*downWord=new RectDown;
    scene->addItem(downWord);
    downWord->setPos((view->width()/2)-(downWord->myWidth/2),0);
    downWord->start();
    std::vector<Word> AllWord=getWord();
    if(AllWord.size()<7){
        return;
    }
    std::vector <std::string>ListWord;
    for(int i=0;i!=4;++i){
        ListWord.push_back(AllWord[i].eng);
    }
    for(int i=0;i!=4;++i){
        RectDown*nextWord=new RectDown;
        nextWord->m_text=ListWord[i];
        scene->addItem(nextWord);
        int margin=(view->width()-(4*nextWord->myWidth)-4*10)/2;
        nextWord->setPos(margin+i*(nextWord->myWidth+10),view->height()/2);
    }
}

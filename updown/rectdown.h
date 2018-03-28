#ifndef RECTDOWN_H
#define RECTDOWN_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QtWidgets>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QPushButton>
#include <QDebug>
#include <string>
class RectDown :public QObject,public QGraphicsRectItem
{
    Q_OBJECT

public:
    std::string m_text;
    int myWidth;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
    RectDown();
    QTimer * timer;
public slots:
    void move();
};
#endif // RECTDOWN_H

#ifndef UPDOWN_H
#define UPDOWN_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QtWidgets>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QPushButton>
#include <QDebug>
#include <QString>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "updown/rectdown.h"
#include <string>
#include "bd.h"
class UpDown : public QWidget
{
    Q_OBJECT
public:
    explicit UpDown(QWidget *parent = 0);
    QGraphicsScene * scene;
    QGraphicsView * view;
    void run();
private:

signals:

public slots:
};

#endif // UPDOWN_H

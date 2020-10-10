#ifndef MIANSCENE_H
#define MIANSCENE_H

#include "mainitem.h"
#include <QGraphicsScene>
#include<QMouseEvent>
#include <QPointF>

class MianScene: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit MianScene(QObject *parent = nullptr);
    explicit MianScene(int width,int height);
    void setSize(int width,int height);
    ~MianScene();


protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);


signals:
//    void doMouseMove();
//public slots:
//    void doSceneAdd(QPointF point1,QPointF point2);

private:
    MainItem *mainitem;
    int width;
    int height;

};


#endif // MIANSCENE_H

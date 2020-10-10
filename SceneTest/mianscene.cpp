#include "mianscene.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include "mainitem.h"

MianScene::MianScene(QObject *parent) :
    QGraphicsScene(parent)
{

}
MianScene::MianScene(int width,int height) :
    width(width),height(height)
{
    this->setBackgroundBrush(Qt::green);
    qDebug()<<"width;==========="<<this->width;
    qDebug()<<"height;==========="<<this->height;
     mainitem = new MainItem();
     mainitem->setSize(width,height);
     this->addItem(mainitem);
}
void MianScene::setSize(int width,int height)
{
    this->width = width;
    this->height = height;
}
MianScene::~MianScene()
{

}

void MianScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    mainitem->doMoveMouse( event->lastScenePos(), event->scenePos() );
}


#ifndef MAINITEM_H
#define MAINITEM_H
#include<QGraphicsObject>
#include<QPainter>
#include<QPaintEvent>
#include<QImage>
#include<QDebug>
#include<QGraphicsSceneMouseEvent>

class MainItem:public QGraphicsObject
{
public:
    explicit MainItem(QGraphicsObject *parent = nullptr);
    MainItem(int width,int height);
    ~MainItem();
//    void paintEvent(QPaintEvent *e);
    void doMoveMouse(QPointF point1,QPointF point2);
    void setSize(int width,int height);
private:
    void init();

private:
    QImage m_img;
    QPainter *m_painter = nullptr;
    int width;
    int height;

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    QRectF boundingRect() const;
};

#endif // MAINITEM_H

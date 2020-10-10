#include "mainitem.h"
#include <QPainter>

MainItem::MainItem(QGraphicsObject *parent):
QGraphicsObject(parent)
{

}
MainItem::~MainItem()
{

}
void MainItem::setSize(int width,int height)
{
    this->width = width;
    this->height = height;
    init();
}
//int MainItem::getWidth()
//{
//    return width;
//}
//int MainItem::getHeight()
//{
//    return height;
//}
void  MainItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
     painter->drawImage(this->boundingRect(), m_img , m_img.rect());
     qDebug()<<"22222222222===========";
}


QRectF MainItem::boundingRect() const
{
    qDebug()<<"11width;==========="<<this->width;
    qDebug()<<"11height;==========="<<this->height;
    QRectF rectf(0,0,width,height);
    return rectf;
}

void MainItem::init()
{
    m_img = QImage(QSize(width,height),QImage:: Format_ARGB32_Premultiplied);

    m_img.fill(Qt::red);

    m_painter = new QPainter(&m_img);

    QPen pen;
    pen.setColor(Qt::black);
    pen.setWidth(8);
    pen.setJoinStyle(Qt::MiterJoin);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::RoundCap);
    QLinearGradient myGradient;
    m_painter->setBrush(myGradient);
    m_painter->setPen(pen);
    m_painter->setRenderHint(QPainter::Antialiasing, true);


}
void MainItem::doMoveMouse( QPointF point1, QPointF point2 )
{
    QPainterPath path;

    path.moveTo(point1);
    QPoint c1 = QPoint( ( point1.x() + point2.x() )/2, point1.y() );
    QPoint c2 = QPoint( ( point1.x() + point2.x() )/2, point2.y() );
    path.cubicTo(c1, c2, point2);
    m_painter->drawPath( path);
    update();

}

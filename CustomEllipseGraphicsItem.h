#ifndef CUSTOMELLIPSEGRAPHICSITEM_H
#define CUSTOMELLIPSEGRAPHICSITEM_H

#include <memory>
#include <QPainter>
#include <QGraphicsItem>
#include <QSizeF>

class CustomEllipse;

class CustomEllipseGraphicsItem : public QGraphicsItem
{
public:
    CustomEllipseGraphicsItem( std::shared_ptr<CustomEllipse> &customEllipse );

    void setCustomEllipse( std::shared_ptr<CustomEllipse> &customEllipse );

protected:
    QRectF boundingRect() const override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
     std::shared_ptr<CustomEllipse> &customEllipse;
     QSize mSize;

};

#endif // CUSTOMELLIPSEGRAPHICSITEM_H

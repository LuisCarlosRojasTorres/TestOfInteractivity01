#ifndef CUSTOMELLIPSEGRAPHICSITEM_H
#define CUSTOMELLIPSEGRAPHICSITEM_H

#include <memory>
#include <QPainter>
#include <QGraphicsObject>
#include <QSizeF>

class CustomEllipse;

class CustomEllipseGraphicsItem : public QGraphicsObject
{
    Q_OBJECT

public:
    CustomEllipseGraphicsItem( std::shared_ptr<CustomEllipse> &customEllipse );

    void setCustomEllipse(double rx , double ry);

protected:
    QRectF boundingRect() const override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
     std::shared_ptr<CustomEllipse> &customEllipse;
     QSize mSize;

signals:
     void rufo();

};

#endif // CUSTOMELLIPSEGRAPHICSITEM_H

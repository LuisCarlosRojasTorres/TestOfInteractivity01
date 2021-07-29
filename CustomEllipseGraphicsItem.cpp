#include "CustomEllipseGraphicsItem.h"

#include "CustomEllipse.h"
#include <iostream>
#include <QPainter>

CustomEllipseGraphicsItem::CustomEllipseGraphicsItem(std::shared_ptr<CustomEllipse> &customEllipse)
    :
      customEllipse(customEllipse)
{

}

void CustomEllipseGraphicsItem::setCustomEllipse(std::shared_ptr<CustomEllipse> &customEllipse)
{
    this->customEllipse = customEllipse;
}

QRectF CustomEllipseGraphicsItem::boundingRect() const
{
    return QRectF(customEllipse->getCenter().x()-customEllipse->getRx(),
                  customEllipse->getCenter().y()-customEllipse->getRy(),
                  customEllipse->getCenter().x()+customEllipse->getRx(),
                  customEllipse->getCenter().y()+customEllipse->getRy()
                  );
}

void CustomEllipseGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    std::cout << "JYL!" << std::endl;
}

void CustomEllipseGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    (void) option;
    (void) widget;

    switch(customEllipse->getBorder()){
    case CustomEllipse::AvailableColors::Blue :
        painter->setPen(Qt::blue);
        break;
    case CustomEllipse::AvailableColors::Black :
        painter->setPen(Qt::black);
        break;
    case CustomEllipse::AvailableColors::Red :
        painter->setPen(Qt::red);
        break;
    case CustomEllipse::AvailableColors::Yellow :
        painter->setPen(Qt::yellow);
        break;
    }

    switch(customEllipse->getFill()){
    case CustomEllipse::AvailableColors::Blue :
        painter->setBrush(Qt::blue);
        break;
    case CustomEllipse::AvailableColors::Black :
        painter->setBrush(Qt::black);
        break;
    case CustomEllipse::AvailableColors::Red :
        painter->setBrush(Qt::red);
        break;
    case CustomEllipse::AvailableColors::Yellow :
        painter->setBrush(Qt::yellow);
        break;
    }
    painter->setBrush(Qt::yellow);
    painter->drawEllipse(this->customEllipse->getCenter(),
                         this->customEllipse->getRx(),
                         this->customEllipse->getRy());
}



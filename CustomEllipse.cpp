#include "CustomEllipse.h"
#include <iostream>

CustomEllipse::CustomEllipse(QPointF center, double radius)
    :
      center(center),
      rx(radius),
      ry(radius),
      border(AvailableColors::Black),
      fill(AvailableColors::Yellow)
{
}

CustomEllipse::CustomEllipse(QPointF center, double rx, double ry)
    :
      center(center),
      rx(rx),
      ry(ry),
      border(AvailableColors::Black),
      fill(AvailableColors::Yellow)
{
}

QPointF CustomEllipse::getCenter() const
{
    return this->center;
}

double CustomEllipse::getRx() const
{
    return this->rx;
}

double CustomEllipse::getRy() const
{
    return this->ry;
}

CustomEllipse::AvailableColors CustomEllipse::getBorder() const
{
    return this->border;
}

CustomEllipse::AvailableColors CustomEllipse::getFill() const
{
    return this->fill;
}

void CustomEllipse::print()
{
    std::cout << " - CustomEllipse::print()" << std::endl;
    std::cout << " - (rx,ry): " << this->getRx() << " , " << this->getRy() << std::endl;
    std::cout << std::endl;

}

void CustomEllipse::setColors(AvailableColors border, AvailableColors fill)
{
    this->border = border;
    this->fill = fill;
}

void CustomEllipse::setRadius(double radius)
{
    this->rx = radius;
    this->ry = radius;
}

void CustomEllipse::setRadius(double rx, double ry)
{
    this->rx = rx;
    this->ry = ry;
}



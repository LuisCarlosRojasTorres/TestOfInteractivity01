#ifndef CUSTOMELLIPSE_H
#define CUSTOMELLIPSE_H

#include <QPointF>

class CustomEllipse
{
public:
    enum AvailableColors{
        Red,
        Blue,
        Yellow,
        Black
    };

    CustomEllipse(QPointF center, double radius);
    CustomEllipse(QPointF center, double rx, double ry);

    QPointF getCenter() const;
    double getRx() const;
    double getRy() const;
    AvailableColors getBorder() const;
    AvailableColors getFill() const;

    void setColors(AvailableColors border, AvailableColors fill);
    void setRadius(double radius);
    void setRadius(double rx, double ry);

private:
    double rx,ry;
    QPointF center;
    AvailableColors border, fill;

};

#endif // CUSTOMELLIPSE_H

#include "CustomEllipseScene.h"
#include "CustomEllipse.h"
#include "CustomEllipseGraphicsItem.h"

#include <iostream>

#define XPOS 0.0
#define YPOS 0.0
#define WIDTH 400
#define HEIGHT 400

CustomEllipseScene::CustomEllipseScene(QObject *parent)
    :
      QGraphicsScene(XPOS, YPOS, WIDTH, HEIGHT, parent)
{
    addRect(XPOS,YPOS,WIDTH,HEIGHT);

    e1 = std::make_shared<CustomEllipse> (QPointF(100,100),5);
    e2 = std::make_shared<CustomEllipse> (QPointF(300,100),10);
    e3 = std::make_shared<CustomEllipse> (QPointF(100,300),20);
    e4 = std::make_shared<CustomEllipse> (QPointF(300,300),30);

    eg1 = new CustomEllipseGraphicsItem(e1);
    eg2 = new CustomEllipseGraphicsItem(e2);
    eg3 = new CustomEllipseGraphicsItem(e3);
    eg4 = new CustomEllipseGraphicsItem(e4);

    addItem(eg1);
    addItem(eg2);
    addItem(eg3);
    addItem(eg4);

}

//void CustomEllipseScene::onUpdate()
//{
//    update();
//}

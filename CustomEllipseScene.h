#ifndef CUSTOMELLIPSESCENE_H
#define CUSTOMELLIPSESCENE_H

#include <QGraphicsScene>

class CustomEllipse;
class CustomEllipseGraphicsItem;

class CustomEllipseScene : public QGraphicsScene
{
    Q_OBJECT
public:
    CustomEllipseScene(QObject *parent);

//public slots:
//    void onUpdate();

private:
    std::shared_ptr<CustomEllipse> e1,e2,e3,e4;
    CustomEllipseGraphicsItem *eg1,*eg2,*eg3,*eg4;
};

#endif // CUSTOMELLIPSESCENE_H

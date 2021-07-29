#include "Widget.h"
#include "ui_Widget.h"

#include "CustomEllipseScene.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    mScene = new CustomEllipseScene(this);

    ui->graphicsView->setScene(mScene);
}

Widget::~Widget()
{
    delete ui;
}


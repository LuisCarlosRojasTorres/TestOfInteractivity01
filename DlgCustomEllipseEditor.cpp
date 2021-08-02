#include "DlgCustomEllipseEditor.h"
#include "ui_DlgCustomEllipseEditor.h"

#include "CustomEllipse.h"

DlgCustomEllipseEditor::DlgCustomEllipseEditor(
        std::shared_ptr<CustomEllipse> &customEllipse,
        QWidget *parent)
    :
    QDialog(parent),
    ui(new Ui::DlgCustomEllipseEditor),
    customEllipse(customEllipse)
{
    ui->setupUi(this);    
    ui->dSB_rx->setValue(customEllipse->getRx());
    ui->dSB_rx->setValue(customEllipse->getRx());

    ui->cB_border->addItem(QString("Black"));
    ui->cB_border->addItem(QString("Blue"));
    ui->cB_border->addItem(QString("Red"));
    ui->cB_border->addItem(QString("Yellow"));

    ui->cB_fill->addItem(QString("Black"));
    ui->cB_fill->addItem(QString("Blue"));
    ui->cB_fill->addItem(QString("Red"));
    ui->cB_fill->addItem(QString("Yellow"));
}

DlgCustomEllipseEditor::~DlgCustomEllipseEditor()
{
    delete ui;
}

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
}

DlgCustomEllipseEditor::~DlgCustomEllipseEditor()
{
    delete ui;
}

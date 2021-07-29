#include "DlgCustomEllipseEditor.h"
#include "ui_DlgCustomEllipseEditor.h"

#include "CustomEllipse.h"

DlgCustomEllipseEditor::DlgCustomEllipseEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgCustomEllipseEditor)
{
    ui->setupUi(this);    

}

DlgCustomEllipseEditor::~DlgCustomEllipseEditor()
{
    delete ui;
}

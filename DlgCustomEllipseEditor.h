#ifndef DLGCUSTOMELLIPSEEDITOR_H
#define DLGCUSTOMELLIPSEEDITOR_H

#include <QDialog>

namespace Ui {
class DlgCustomEllipseEditor;
}

class CustomEllipse;

class DlgCustomEllipseEditor : public QDialog
{
    Q_OBJECT

public:
    explicit DlgCustomEllipseEditor(QWidget *parent = nullptr);
    ~DlgCustomEllipseEditor();

private:
    Ui::DlgCustomEllipseEditor *ui;

    //CustomEllipse *e;
};

#endif // DLGCUSTOMELLIPSEEDITOR_H

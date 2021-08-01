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
    explicit DlgCustomEllipseEditor(std::shared_ptr<CustomEllipse> &customEllipse,
                                    QWidget *parent = nullptr);
    ~DlgCustomEllipseEditor();

private:
    Ui::DlgCustomEllipseEditor *ui;

    std::shared_ptr<CustomEllipse> &customEllipse;
};

#endif // DLGCUSTOMELLIPSEEDITOR_H

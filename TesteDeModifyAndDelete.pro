QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CustomEllipse.cpp \
    CustomEllipseGraphicsItem.cpp \
    CustomEllipseScene.cpp \
    DlgCustomEllipseEditor.cpp \
    main.cpp \
    Widget.cpp

HEADERS += \
    CustomEllipse.h \
    CustomEllipseGraphicsItem.h \
    CustomEllipseScene.h \
    DlgCustomEllipseEditor.h \
    Widget.h

FORMS += \
    DlgCustomEllipseEditor.ui \
    Widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

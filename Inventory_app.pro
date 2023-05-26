QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    furnituredialog.cpp \
    infodialog.cpp \
    main.cpp \
    mainwindow.cpp \
    mensweardialog.cpp \
    sportdialog.cpp \
    womensweardialog.cpp

HEADERS += \
    furnituredialog.h \
    infodialog.h \
    mainwindow.h \
    mensweardialog.h \
    sportdialog.h \
    womensweardialog.h

FORMS += \
    furnituredialog.ui \
    infodialog.ui \
    mainwindow.ui \
    mensweardialog.ui \
    sportdialog.ui \
    womensweardialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

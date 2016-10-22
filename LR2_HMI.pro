#-------------------------------------------------
#
# Project created by QtCreator 2016-09-27T18:19:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LR2_HMI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialognumpad.cpp \
    dialogsupport.cpp \
    keyboard.cpp

HEADERS  += mainwindow.h \
    dialognumpad.h \
    dialogsupport.h \
    keyboard.h

FORMS    += mainwindow.ui \
    dialognumpad.ui \
    dialogsupport.ui \
    keyboard.ui

RESOURCES += \
    resource.qrc

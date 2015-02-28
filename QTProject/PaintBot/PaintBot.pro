#-------------------------------------------------
#
# Project created by QtCreator 2015-02-25T19:02:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PaintBot
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp
<<<<<<< HEAD

HEADERS  += mainwindow.h

=======

HEADERS  += mainwindow.h
>>>>>>> parent of c0843e6... arm

FORMS    += mainwindow.ui

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/graphicsview/dragdroprobot
INSTALLS += target

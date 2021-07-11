#-------------------------------------------------
#
# Project created by QtCreator 2017-10-13T18:51:53
#
#-------------------------------------------------

QT       += core gui multimediawidgets

CONFIG += c++11
#LIBS += -L/usr/local/boost_1_61_0/libs -lboost_python -lboost_system -lpython2.7
#LIBS += -l:libcryptopp.a
#INCLUDEPATH += /usr/local/boost_1_61_0/boost /usr/include/python2.7
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PDBM
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    guiclasses/QRadioButton2.cpp \
    guiclasses/sitebutton.cpp \
    guiclasses/filebutton.cpp \
    guiclasses/QGraphicsScene2.cpp

HEADERS  += mainwindow.h \
    guiclasses/QRadioButton2.h \
    guiclasses/sitebutton.h \
    guiclasses/filebutton.h \
    guiclasses/QGraphicsScene2.h \
    defines.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc


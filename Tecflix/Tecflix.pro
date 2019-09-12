#-------------------------------------------------
#
# Project created by QtCreator 2019-09-07T11:31:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tecflix
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    paginaweb.cpp \
    pelicula.cpp \
    lista.cpp \
    node.cpp \
    modotradicional.cpp \
    modoscroll.cpp

HEADERS  += mainwindow.h \
    paginaweb.h \
    pelicula.h \
    lista.h \
    node.h \
    modotradicional.h \
    modoscroll.h

FORMS    += mainwindow.ui \
    paginaweb.ui

QMAKE_CXXFLAGS += -std=gnu++14

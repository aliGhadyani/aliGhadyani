#-------------------------------------------------
#
# Project created by QtCreator 2022-01-01T09:44:36
#
#-------------------------------------------------

QT       += core gui
QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ToDoList
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    taskdetail.cpp \
    newlist.cpp

HEADERS  += mainwindow.h \
    taskdetail.h \
    definitions.h \
    newlist.h

FORMS    += mainwindow.ui \
    taskdetail.ui \
    newlist.ui

RESOURCES += \
    resources.qrc

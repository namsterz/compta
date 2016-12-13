#-------------------------------------------------
#
# Project created by QtCreator 2016-12-11T10:05:12
#
#-------------------------------------------------

QT       += core gui
CONFIG += 64bit



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PCCOMPT
TEMPLATE = app

    TARGET = 64bit_binary
SOURCES += main.cpp\
        mainwindow.cpp \
    GestionClient.cpp

HEADERS  += mainwindow.h \
    GestionClient.h

FORMS    += mainwindow.ui

DISTFILES += \
    qml.qml \
    darkorange.stylesheet \
    connexion.ico

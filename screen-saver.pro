QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt-project
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    datetimeprovider.cpp \
    userscreensaverparameters.cpp

HEADERS += \
        mainwindow.h \
    datetimeprovider.h \
    userscreensaverparameters.h

FORMS += \
        mainwindow.ui

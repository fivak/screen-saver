QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt-project
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    datetimeprovider.cpp \
    userscreensaverparameters.cpp \
    screensaver.cpp \
    filedownloader.cpp \
    randomimageurlprovider.cpp \
    timeprettyprinter.cpp

HEADERS += \
        mainwindow.h \
    datetimeprovider.h \
    userscreensaverparameters.h \
    screensaver.h \
    filedownloader.h \
    randomimageurlprovider.h \
    timeprettyprinter.h

FORMS += \
        mainwindow.ui \
    screensaver.ui

RESOURCES += \
    resource.qrc

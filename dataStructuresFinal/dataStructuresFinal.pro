QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    amphibian.cpp \
    animals.cpp \
    bird.cpp \
    fish.cpp \
    main.cpp \
    mainwindow.cpp \
    mammal.cpp \
    reptile.cpp

HEADERS += \
    amphibian.h \
    animals.h \
    bird.h \
    fish.h \
    mainwindow.h \
    mammal.h \
    reptile.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

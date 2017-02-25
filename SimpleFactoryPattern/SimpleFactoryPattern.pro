TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    simplefactory.cpp \
    strategy.cpp

HEADERS += \
    simplefactory.h \
    macro.h \
    classes.h \
    strategy.h

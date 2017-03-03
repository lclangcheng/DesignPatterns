TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

HEADERS += \
    AbstractFactory.h \
    FactoryMethod.h \
    SimpleFactory.h

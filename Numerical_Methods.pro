#-------------------------------------------------
#
# Project created by QtCreator 2017-11-15T16:44:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Numerical_Methods
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        numerical_methods.cpp \
        integracion.cpp\
        derivacion.cpp\
        euler.cpp\
        eliminacion_gauss.cpp\
        gauss_seidel.cpp\
        punto_fijo.cpp\
        newton_raphson.cpp\
        interpolacion.cpp\
        regresion_lineal.cpp\
        regresionmultiple.cpp\
        runge_kutta.cpp

HEADERS += \
        numerical_methods.h \
        integracion.h\
        derivacion.h\
        euler.h\
        eliminacion_gauss.h\
        gauss_seidel.h\
        punto_fijo.h\
        newton_raphson.h\
        interpolacion.h\
        regresion_lineal.h\
        regresionmultiple.h\
        runge_kutta.h

FORMS += \
        numerical_methods.ui \
        integracion.ui\
        derivacion.ui\
        euler.ui\
        eliminacion_gauss.ui\
        gauss_seidel.ui\
        punto_fijo.ui\
        newton_raphson.ui\
        interpolacion.ui\
        regresion_lineal.ui\
        regresionmultiple.ui\
        runge_kutta.ui

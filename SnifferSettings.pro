#-------------------------------------------------
#
# Project created by QtCreator 2012-09-26T15:36:32
#
#-------------------------------------------------

QT       += core gui
include(../libs.pri)

TARGET = SnifferSettings
TEMPLATE = lib

CONFIG += plugin

SOURCES += main.cpp\
        sniffersettings.cpp

HEADERS  += sniffersettings.h \
    interfaces/isniffersettings.h

FORMS    += sniffersettings.ui

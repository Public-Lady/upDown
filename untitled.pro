#-------------------------------------------------
#
# Project created by QtCreator 2018-03-28T08:43:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app
LIBS+=-L. -lsqlite3

SOURCES += main.cpp\
    updown/rectdown.cpp \
    updown/up_down.cpp

HEADERS  += \
    updown/rectdown.h \
    updown/up_down.h \
    bd.h \
    sqlite3.h \
    word.h

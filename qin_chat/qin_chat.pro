#-------------------------------------------------
#
# Project created by QtCreator 2017-06-21T14:17:43
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += network
TARGET = qin_chat
TEMPLATE = app


SOURCES += main.cpp\
    login.cpp \
    widget.cpp \
    tcpserver.cpp \
    tcpclient.cpp \
    register.cpp

HEADERS  += \
    connection.h \
    login.h \
    widget.h \
    tcpserver.h \
    tcpclient.h \
    register.h

FORMS    += \
    login.ui \
    widget.ui \
    tcpserver.ui \
    tcpclient.ui \
    register.ui

OTHER_FILES +=

RESOURCES += \
    resource.qrc

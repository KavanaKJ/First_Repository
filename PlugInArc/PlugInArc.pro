TEMPLATE = lib
TARGET = PlugInArc
QT += qml quick
CONFIG += plugin c++11

TARGET = $$qtLibraryTarget($$TARGET)
uri = com.pthinks.arc
DESTDIR=$$PWD/bins/com/pthinks/arc

# Input
SOURCES += \
        MyArc.cpp \
        PlugInArc_plugin.cpp \
        MyItem.cpp

HEADERS += \
        MyArc.h \
        PlugInArc_plugin.h \
        MyItem.h

DISTFILES = qmldir


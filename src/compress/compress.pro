TARGET = QtCompress
QT = core

DEFINES += QT_BUILD_GUI_LIB

load(qt_module)

HEADERS += \
	qzipreader.h \
	qzipwriter.h

SOURCES += qzip.cpp

include(../3rdparty/zlib.pri)

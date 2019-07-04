#-------------------------------------------------
#
# Project created by QtCreator 2019-06-12T13:31:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = lsl_manager
TEMPLATE = app

CONFIG += c++11

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp

HEADERS += \
    include/mainwindow.h

FORMS += \
    forms/mainwindow.ui

LIBS += -L./lib
INCLUDEPATH += include

win32:DESTDIR = bin/WIN32/Window
win32:TARGET_CUSTOM_EXT = .exe
win32:DEPLOY_COMMAND = windeployqt
win32:DEPLOY_TARGET = $$shell_quote($$shell_path($${OUT_PWD}/$${DESTDIR}/$${TARGET}$${TARGET_CUSTOM_EXT}))

unix:DESTDIR = bin/UNIX/Linux_4.15.0-46-generic
#warning($${DEPLOY_COMMAND} $${DEPLOY_TARGET})

win32 {
    CONFIG(release, debug|release)
    {
        QMAKE_POST_LINK += $$quote($${DEPLOY_COMMAND} $${DEPLOY_TARGET})
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) del Makefile)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) del Makefile.Debug)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) del Makefile.Release)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) del .qmake.stash)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) del ui_mainwindow.h)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) del lsl_manager.pro.user)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) rmdir /S /Q release)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) rmdir /S /Q debug)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) $$shell_path($${OUT_PWD}/mkshcut.bat) $$shell_path($${DESTDIR}/$${TARGET}$${TARGET_CUSTOM_EXT}))
    }
}

unix {
    CONFIG(release, debug|release)
    {
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) rm Makefile)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) rm .qmake.stash)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) rm lsl_manager.pro.user)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) rm *.h)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) rm *.cpp)
        QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) rm *.o)
        #QMAKE_POST_LINK += $$quote($$escape_expand(\n\t) $$shell_path($${OUT_PWD}/mkshcut.bat) $$shell_path($${DESTDIR}/$${TARGET}$${TARGET_CUSTOM_EXT}))
    }
}

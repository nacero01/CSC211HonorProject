QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutdialog.cpp \
    game.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    multiplechoice.cpp \
    registerdialog.cpp

HEADERS += \
    aboutdialog.h \
    game.h \
    login.h \
    mainwindow.h \
    multiplechoice.h \
    registerdialog.h

FORMS += \
    aboutdialog.ui \
    game.ui \
    login.ui \
    mainwindow.ui \
    multiplechoice.ui \
    registerdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    MultipleAnswer \
    MultipleAnswer.txt \
    MultipleChoiceQuestion \
    MultipleChoiceQuestion.txt \
    MultipleRealAnswer \
    MultipleRealAnswer.txt

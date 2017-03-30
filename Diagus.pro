#-------------------------------------------------
#
# Project created by QtCreator 2017-03-08T11:43:52
#
#-------------------------------------------------

QT       += core gui
Qt += widgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Diagus
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


SOURCES += main.cpp \
    life_exchange.cpp \
    math_yuannyuan.cpp \
    about.cpp \
    life_timegap.cpp \
    LifeWindow.cpp \
    math_2PointDis.cpp \
    MathPage.cpp \
    Main_Page.cpp \
    life_SpeedConvert.cpp \
    math_1Yuan2Ci.cpp \
    1cache.cpp \
    SetPage.cpp

HEADERS  += \
    ../build-Diagus-Android_for_armeabi_v7a_GCC_4_9_Qt_5_8_0-Release/ui_mainwindow.h \
    life_exchange.h \
    math_yuannyuan.h \
    cache.h \
    about.h \
    life_timegap.h \
    LifeWindow.h \
    math_2PointDis.h \
    MathPage.h \
    Main_Page.h \
    life_SpeedConvert.h \
    math_1Yuan2Ci.h \
    SetPage.h

FORMS    += \
    life_exchange.ui \
    math_yuannyuan.ui \
    cache.ui \
    about.ui \
    life_timegap.ui \
    LifeWindow.ui \
    math_2PointDis.ui \
    MathPage.ui \
    Main_Page.ui \
    life_SpeedConvert.ui \
    math_1Yuan2Ci.ui \
    SetPage.ui

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat \
    icon.png

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

RESOURCES += \
    iconpoc.qrc


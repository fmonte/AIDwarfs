TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -LC:\Users\Filippo\Downloads\SFML-master-build\lib

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system

INCLUDEPATH += C:\Users\Filippo\Downloads\SFML-master\include
DEPENDPATH += C:\Users\Filippo\Downloads\SFML-master\include

SOURCES += main.cpp \
    statemachine.cpp \
    agent.cpp \
    state.cpp \
    dwarf.cpp \
    sleepstate.cpp \
    movestate.cpp \
    minestate.cpp \
    Vector2.cpp \
    steeringbehaviours.cpp \
    graphicfigure.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    statemachine.h \
    agent.h \
    state.h \
    dwarf.h \
    sleepstate.h \
    movestate.h \
    minestate.h \
    SteeringBehaviors.h \
    Vector2.h \
    graphicfigure.h


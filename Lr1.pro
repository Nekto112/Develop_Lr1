TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        game.cpp \
        lobby.cpp \
        main.cpp \
        nokgame.cpp \
        util.cpp

HEADERS += \
    game.h \
    lobby.h \
    nokgame.h \
    util.h

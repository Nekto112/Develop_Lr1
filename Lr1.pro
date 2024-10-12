TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        game.cpp \
        lobby.cpp \
        main.cpp \
        nokgame.cpp \
        progressivegame.cpp \
        util.cpp

HEADERS += \
    game.h \
    lobby.h \
    nokgame.h \
    progressivegame.h \
    util.h

#ifndef LOBBY_H
#define LOBBY_H

#include <iostream>
#include "nokgame.h"

class Lobby
{   

private:
    std::string player_name;

public:
    Lobby();

    void hello();
    void play_game();
};

#endif // LOBBY_H

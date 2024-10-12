#ifndef LOBBY_H
#define LOBBY_H

#include <iostream>
#include "nokgame.h"
#include "progressivegame.h"

class Lobby
{   

private:
    std::string player_name;

public:
    Lobby();

    void hello();
    void play_game();
    Game *game_selector();
};

#endif // LOBBY_H

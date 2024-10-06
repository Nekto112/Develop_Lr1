#ifndef LOBBY_H
#define LOBBY_H

#include <iostream>

class Lobby
{   

private:
    std::string player_name;

public:
    Lobby();

    void hello();


    void start_game();
};

#endif // LOBBY_H

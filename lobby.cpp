#include "lobby.h"

Lobby::Lobby()
{

}

void Lobby::hello()
{

    std::cout << "Welcome to the Brain Games!" << "\n";
    std::cout << "May I have your name? " << "\n";
    std::cin >> player_name;

}

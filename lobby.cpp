#include "lobby.h"

Lobby::Lobby()
{

}

void Lobby::hello()
{

    std::cout << "Welcome to the Brain Games!" << "\n";
    std::cout << "May I have your name? ";
    std::cin >> player_name;
    std::cout << "Hello, " << player_name << "!\n";
}

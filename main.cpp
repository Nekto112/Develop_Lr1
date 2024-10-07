#include <iostream>
#include <time.h>

#include "lobby.h"


using namespace std;

int main()
{
    std::srand(time(NULL));

    Lobby* lobby = new Lobby();
    lobby->hello();
    lobby->play_game();
    return 0;
}

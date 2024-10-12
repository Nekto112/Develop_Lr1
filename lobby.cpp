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

void Lobby::play_game()
{
    while(true){
        Game* game = game_selector();
        for(int i = 0; i < 3; ++i){
            game->play();
        }

    }
}

Game *Lobby::game_selector()
{
    std::cout << "Select the game: 1 - NOK game, 2 - Progressive Game \n";
    std::string game = "";

    while (true){
        std::cin >> game;
        if(game == "1"){
            return new NOKGame();
        }
        else if(game == "2"){
            return new ProgressiveGame();
        }
        else{
            std::cout << "Incorrect enter, please just enter number\n1 - NOK game, 2 - Progressive Game\n";
        }
    }
}

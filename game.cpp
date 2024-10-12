#include "game.h"

Game::Game()
{


}

void Game::play()
{
    generate();
    int p_answer;
    std::cout << "Your answer: ";
    std::cin >> p_answer;
    check_answer(p_answer);
}

bool Game::check_answer(int p_answer)
{
    if(p_answer == this->answer){
        std::cout << "Correct!\n";
        return true;
    }
    std::cout << "'" << p_answer << "' is wrong answer ;(. Correct answer was '" << this->answer << "'\n";
    return false;
}

#ifndef GAME_H
#define GAME_H
#include <iostream>


class Game
{
protected:
    int answer;
    Game();

public:

    virtual void generate() = 0;
    bool check_answer(int p_answer);
};

#endif // GAME_H

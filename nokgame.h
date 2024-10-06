#ifndef NOKGAME_H
#define NOKGAME_H
#include <numeric>

#include "game.h"


class NOKGame : public Game
{
public:
    NOKGame();

    void generate() override;
};

#endif // NOKGAME_H

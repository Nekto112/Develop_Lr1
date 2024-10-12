#ifndef PROGRESSIVEGAME_H
#define PROGRESSIVEGAME_H

#include <iostream>
#include <vector>

#include "game.h"

class ProgressiveGame : public Game
{
private:
    std::vector<int> generateGeometricProgression(int start, int ratio, int length);

public:
    ProgressiveGame();

    void generate() override;
};

#endif // PROGRESSIVEGAME_H

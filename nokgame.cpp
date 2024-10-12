#include "nokgame.h"

#include "util.h"

NOKGame::NOKGame()
{
    std::cout << "Find the smallest common multiple of given numbers.\n";
}

void NOKGame::generate()
{
    std::vector<int> numbers;
    std::cout << "Question: ";
    for(int i = 0; i < 3; ++i){
        int tmp = Util::random_range(1, 100);
        std::cout << tmp << " ";
        numbers.push_back(tmp);
    }
    std::cout << "\n";
    this->answer = std::lcm(std::lcm(numbers[0], numbers[1]), numbers[2]);
}

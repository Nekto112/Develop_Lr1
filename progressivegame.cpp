#include "progressivegame.h"
#include "util.h"

std::vector<int> ProgressiveGame::generateGeometricProgression(int start, int ratio, int length)
{
    std::vector<int> progression;
    progression.reserve(length);

    int carrera = start;
    for (int i = 0; i < length; ++i) {
        progression.push_back(carrera);
        carrera *= ratio;
    }

    return progression;

}

ProgressiveGame::ProgressiveGame()
{
    std::cout << "What number is missing in the progression?\n";
}

void ProgressiveGame::generate()
{
    int startPos = Util::random_range(1, 5);
    int ratio = Util::random_range(2, 3);
    int lenght = Util::random_range(5, 10);

    std::vector<int> numbers = generateGeometricProgression(startPos, ratio, lenght);


    int answerId = Util::random_range(0, lenght-1);
    answer = numbers[answerId];

    //std::cout << "\n" << startPos << "\n" << lenght << "\n" << answer << "\n";

    std::cout << "Question: ";
    for(int i = 0; i < numbers.size(); ++i){
        if(i == answerId){
            std::cout << ".. ";
            continue;
        }
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";
}

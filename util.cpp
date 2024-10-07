#include "util.h"

Util::Util()
{

}

int Util::random_range(int min, int max)
{
    return min + ( std::rand() % ( max - min + 1 ) );
}

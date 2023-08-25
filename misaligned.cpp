#include <iostream>
#include <assert.h>
#include <iomanip>

namespace ColorMap
{
    int computeColorPairNumber(int i, int j)
    {
        return i * 5 + j + 1;
    }

    int printColorMap()
    {
        const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
        const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
        int i = 0, j = 0;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                std::cout << std::setw(2) << computeColorPairNumber(i, j) << std::setw(2) << "|" << std::setw(6) << majorColor[i] << std::setw(2) << "|" << std::setw(6) << minorColor[i] << "\n";
            }
        }
        return i * j;
    }
}

void testColorMap()
{
    int result = ColorMap::printColorMap();
    assert(result == 25);
    assert(ColorMap::computeColorPairNumber(0, 0) == 1);
    assert(ColorMap::computeColorPairNumber(0, 2) == 3);
}

int main()
{
    testColorMap();
    std::cout << "All is well (maybe!)\n";
    return 0;
}

#include <iostream>
#include <assert.h>

namespace ColorMap
{
    int computeColorPairNumber(int i, int j)
    {
        return i * 5 + j;
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
                std::cout << computeColorPairNumber(i, j) << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
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
    assert(ColorMap::computeColorPairNumber(5, 5) == 25);
}

int main()
{
    testColorMap();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
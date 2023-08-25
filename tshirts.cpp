#include <iostream>
#include <assert.h>

namespace TShirtSize{
    char size(int cms)
    {
        char sizeName = '\0';
        if (cms <= 38)
        {
            sizeName = 'S';
        }
        else if (cms > 38 && cms <= 42)
        {
            sizeName = 'M';
        }
        else if (cms > 42)
        {
            sizeName = 'L';
        }
        return sizeName;
    }
}

void testTShirtSize(){
    assert(TShirtSize::size(37) == 'S');
    assert(TShirtSize::size(38) == 'S');
    assert(TShirtSize::size(40) == 'M');
    assert(TShirtSize::size(42) == 'M');
    assert(TShirtSize::size(43) == 'L');
}


int main()
{
    testTShirtSize();
    std::cout << "All is well (maybe!)\n";
    return 0;
}

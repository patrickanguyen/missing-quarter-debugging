#include <iostream>
#include <assert.h>


// For N >= 0
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
int fibonacci(int index)
{
    // ASSERTS ARE NOT MEANT FOR ERROR CHECKING
    assert(index >= 0);

    // F(0) = 0, F(1) = 1
    if (index == 0 || index == 1)
    {
        return index;
    }

    /*
    It is possible to do this instead,
    HOWEVER, this is band-aid to a much larger issue
    Any index < 0 should NEVER to fed to the function in the first place

    if (index <= 1)
    {
        return index;
    }
    */

    // F(n) = F(n-1) + F(n-2)
    return fibonacci(index-1) + fibonacci(index-2);
}

int main()
{
    int x;
    std::cin >> x;

    #if 0
    if (x < 0)
    {
        std::cout << "ERROR: X should be zero or a positive integer\n";
        return 0;
    }
    #endif

    int result = fibonacci(x);

    std::cout << result << '\n';

    return 0;
}
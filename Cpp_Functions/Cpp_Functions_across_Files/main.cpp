#include <iostream>
#include "compare.h"
#include "operations.h"

int main()
{
    int maximum = max(27, 11);
    int minimum = min(27, 11);
    std::cout << "Max: " << maximum << std::endl;
    std::cout << "Min: " << minimum << std::endl;

    int x = 4;
    int y = 5;

    int result = incr_mult(x, y);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

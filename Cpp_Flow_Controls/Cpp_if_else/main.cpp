#include <iostream>

int main()
{
    bool red{true};
    bool yellow{true};
    bool green{false};

    if (red)
    {
        std::cout << "Move On" << std::endl;
    }
    if (yellow)
    {
        std::cout << "Slow Down" << std::endl;
    }
    if (green)
    {
        std::cout << "Go" << std::endl;
    }

    return 0;
}
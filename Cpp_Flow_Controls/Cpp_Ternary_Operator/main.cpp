#include <iostream>
#include <string>

int main()
{
    int max{};
    int a{35};
    int b{27};

    max = (a > b) ? a : b;

    std::cout << "Max Number: " << max << std::endl;

    // Ternary Initialization
    std::cout << std::endl;
    bool fast{true};
    std::string speed{fast ? "Very Fast" : "Very Slow"};
    std::cout << "Speed: " << speed << std::endl;
    return 0;
}
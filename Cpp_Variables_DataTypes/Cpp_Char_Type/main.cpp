#include <iostream>

int main()
{
    char char1{'H'};
    char char2{'E'};
    char char3{'L'};
    char char4{'L'};
    char char5{'O'};

    std::cout << char1 << std::endl;
    std::cout << char2 << std::endl;
    std::cout << char3 << std::endl;
    std::cout << char4 << std::endl;
    std::cout << char5 << std::endl;

    std::cout << std::endl;

    char avalue = 65;
    std::cout << "Value: " << avalue << std::endl;
    std::cout << "Cast value to int: " << static_cast<int>(avalue) << std::endl;

    return 0;
}
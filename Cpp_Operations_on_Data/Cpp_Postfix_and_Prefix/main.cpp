#include <iostream>

int main()
{
    int value{5};

    value++;
    std::cout << value << std::endl;
    std::cout << "---------------" << std::endl;
    value = 5;
    std::cout << value++ << std::endl; // Postfix
    std::cout << "---------------" << std::endl;
    value = 5;
    std::cout << ++value << std::endl; // Prefix
    std::cout << "---------------" << std::endl;
    value = 5;
    std::cout << value-- << std::endl; // Postfix
    std::cout << "---------------" << std::endl;
    value = 5;
    std::cout << --value << std::endl; // Prefix
    std::cout << "---------------" << std::endl;
    return 0;
}
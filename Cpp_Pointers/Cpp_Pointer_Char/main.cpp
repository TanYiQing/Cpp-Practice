#include <iostream>

int main()
{
    const char *message{"Hello World!"};
    std::cout << "message: " << message << std::endl;
    std::cout << "*message: " << *message << std::endl;

    char message1[]{"Hello"};
    message1[0] = 'B';
    std::cout << "message1: " << message1 << std::endl;

    return 0;
}
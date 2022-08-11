#include <iostream>
int main()
{
    // Capturing all by value
    int c{42};
    double d{123.12};
    auto func1 = [=]()
    {
        std::cout << "Inner value c: " << c << std::endl;
        std::cout << "Inner value d: " << d << std::endl;
    };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Printing value... " << std::endl;
        func1();
        std::cout << std::endl;
    }

    // Capturing all by reference
    auto func1 = [&]()
    {
        std::cout << "Inner value c: " << c << std::endl;
        std::cout << "Inner value d: " << d << std::endl;
    };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Printing value... " << std::endl;
        func1();
        std::cout << std::endl;
    }
    return 0;
}
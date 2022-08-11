#include <iostream>

int main()
{
    // Capturing List
    double a{10};
    double b{20};
    auto func = [a, b]()
    {
        std::cout << "a + b: " << a + b << std::endl;
    };

    func();

    // Capturing by value - The inner value and outer value will not be the same because the inner value just make a copy from the variable
    int c{42};
    auto func1 = [c]()
    {
        std::cout << "Inner value: " << c << std::endl;
    };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Outer value: " << c << std::endl;
        func1();
        ++c;
    }

    // Capturing by reference -  The inner and outer value will be affected together because the same value are reference
    int d{42};
    auto func1 = [&d]()
    {
        std::cout << "Inner value: " << &d << std::endl;
    };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Outer value: " << &d << std::endl;
        func1();
        ++c;
    }

    return 0;
}
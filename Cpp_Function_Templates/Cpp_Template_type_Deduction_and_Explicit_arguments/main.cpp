#include <iostream>

template <typename T>
T maximum(T a, T b); // Only accept the same type of parameters

int main()
{
    int x = 10;
    int y = 11;
    double a = 12.12;
    double b = 27.27;
    std::string e = "Hello, world";
    std::string f = "World";

    auto result1 = maximum<double>(x, a); // Explicitly convert to double (able to take two different parameters)
    auto result2 = maximum(a, b);
    auto result3 = maximum(e, f);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;

    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}
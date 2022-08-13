#include <iostream>

template <typename T>
const T &maximum(const T &a, const T &b);

int main()
{
    double a = 27.27;
    double b = 21.21;

    std::cout << "Out - &a: " << &a << std::endl;
    auto result = maximum(a, b);
    std::cout << "Out - &a: " << &a << std::endl;

    return 0;
}

template <typename T>
const T &maximum(const T &a, const T &b)
{
    std::cout << "In - &a: " << &a << std::endl;
    return (a > b) ? a : b;
}
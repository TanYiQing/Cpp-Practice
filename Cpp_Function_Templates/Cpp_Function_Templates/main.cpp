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
    int *p_x{&x};
    int *p_y{&y};

    auto result1 = maximum(x, y);
    auto result2 = maximum(a, b);
    auto result3 = maximum(e, f);
    auto result4 = maximum(p_x, p_y); // Compare by using memory address pointed

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;
    std::cout << "Result 4: " << result4 << std::endl;

    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}
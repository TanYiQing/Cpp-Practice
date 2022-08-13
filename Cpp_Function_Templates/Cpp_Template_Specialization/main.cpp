#include <iostream>
#include <cstring>

template <typename T>
T maximum(T a, T b);

template <>
const char *maximum<const char *>(const char *a, const char *b) // Using explicit template argument to specify
{
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main()
{
    int a = 10;
    int b = 11;
    double c = 12.12;
    double d = 27.27;
    std::string e = "Hello";
    std::string f = "World";

    auto max_int = maximum(a, b);
    auto max_double = maximum(c, d);
    std::string max_str = maximum(e, f);

    std::cout << "Result 1: " << max_int << std::endl;
    std::cout << "Result 2: " << max_double << std::endl;
    std::cout << "Result 3: " << max_str << std::endl;

    const char *g{"wild"};
    const char *h{"animal"};

    std::cout << "Result 4: " << maximum(g, h) << std::endl;

    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}
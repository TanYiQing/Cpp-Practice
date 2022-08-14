#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t)
{
    sizeof(T) < 4;           // Only enforces syntax
    requires sizeof(T) <= 4; // Nested requirements - required the parameter to fulfill certain requirements
};

template <typename T>
// requires std::integral<T> || std::floating_point<T> T add(T a, T b)  // Type 1
// requires std::integral<T> && TinyType<T> T add(T a, T b)             // Type 2
// requires std::integral<T> && requires(T t)                           // Type 3
// {
//     sizeof(T) < 4;           // Only enforces syntax
//     requires sizeof(T) <= 4; // Nested requirements - required the parameter to fulfill certain requirements
// }
T add(T a, T b)
{
    return a + b;
}

int main()
{

    int x{6};
    int y{4};

    add(x, y);

    return 0;
}
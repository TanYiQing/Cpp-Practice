#include <iostream>
#include <type_traits>
#include <concepts>

// Syntax 1 - Concept
// template <typename T>
// concept MyIntegral = std::is_integral_v<T>;

// Syntax 1 - Template
// template <typename T>
// requires MyIntegral<T> T add(T a, T b)
// {
//     return a + b;
// }

// Syntax 2 - Template
// template <MyIntegral T>
// T add(T a, T b)
// {
//     return a + b;
// }

// Syntax 3 - Template
// MyIntegral auto add(MyIntegral auto a, MyIntegral auto b){
//     return a+b;
// }

//----------------------------------------------------------------
// Syntax 2 -  Concept
// template <typename T>
// concept Multipliable = requires(T a, T b)
// {
//     a *b; // Use to make sure the syntax is valid
// };

// template <typename T>
// requires Multipliable<T> T add(T a, T b)
// {
//     return a + b;
// }

//----------------------------------------------------------------
// Syntax 3 -  Concept
template <typename T>
concept Incremental = requires(T a)
{
    a += 1; // Syntax inside is only to check whether the syntax is valid, not to produce output
    ++a;
    a++;
};

template <typename T>
requires Incremental<T> T add(T a, T b)
{
    return a + b;
}

int main()
{
    double x = 6;
    double y = 7;
    add(x, y); // Only accept integral

    return 0;
}
#include <iostream>
#include <concepts>

// Syntax 1
// template <typename T>
// requires std::integral<T>
//     T add(T a, T b)
// {
//     return a + b;
// }

// Syntax 2
// template <std::integral T>
// T add(T a, T b)
// {
//     return a + b;
// }

// Syntax 3
// auto add(std::integral auto a, std::integral auto b)
// {
//     return a + b;
// }

// Syntax 4
template <typename T>
T add(T a, T b) requires std::integral<T>
{
    return a + b;
}

int main()
{
    // Concepts - Set up constraint in function template

    char a_0{10};
    char a_1{20};

    auto result_a = add(a_0, a_1);
    std::cout << "result_a: " << static_cast<int>(result_a) << std::endl;

    int b_0{11};
    int b_1{5};

    auto result_b = add(b_0, b_1);
    std::cout << "result_b: " << result_b << std::endl;

    // double c_0{11.11};
    // double c_1{12.12};
    // auto result_c = add(c_0, c_1); // Will be error because already force it to become integer type in concepts

    return 0;
}
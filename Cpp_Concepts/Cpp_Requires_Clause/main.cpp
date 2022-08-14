#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t)
{
    sizeof(T) < 4;           // Only enforces syntax
    requires sizeof(T) <= 4; // Nested requirements - required the parameter to fulfill certain requirements
};

TinyType auto add(TinyType auto a, TinyType auto b)
{
    return a + b;
}

template <typename T>
concept Addable = requires(T a, T b)
{
    {
        a + b
    }
    noexcept->std::convertible_to<int>; // Compound requirements - check that a+b is valid syntax, doesn't throw exceptions (optional), and the result is convertible to int (optional)
};

int main()
{

    char x{67};
    char y{56};

    auto result = add(x, y); // Cannot work if using double, because

    std::cout << "result: " << result << std::endl;
    std::cout << "sizeof(result): " << sizeof(result) << std::endl;
    return 0;
}
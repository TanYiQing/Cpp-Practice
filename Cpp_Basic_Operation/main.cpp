#include <iostream>
int main()
{
    // Addition
    int num1{1};
    int num2{2};
    int result{};
    result = num1 + num2;
    std::cout << "Addition Result: " << result << std::endl;

    // Subtraction
    result = num2 - num1;
    std::cout << "Subtraction Result: " << result << std::endl;

    // Multiplication
    result = num2 * num1;
    std::cout << "Multiplication Result: " << result << std::endl;

    // Division
    result = num2 / num1;
    std::cout << "Division Result: " << result << std::endl;

    // Modulus
    result = num2 % num1;
    std::cout << "Modulus Result: " << result << std::endl;

    return 0;
}
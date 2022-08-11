#include <iostream>
int main()
{
    // Declare a lambda function
    auto lmbd_function = []()
    { std::cout << "Hello World" << std::endl; };

    lmbd_function(); // Calling a lambda function

    // Declare a lambda function and call it directly
    []()
    { std::cout << "Call directly" << std::endl; }();

    // Declare a lambda function that takes parameters
    [](double a, double b)
    { std::cout << "a+b: " << (a + b) << std::endl; }(27.0, 12.0);

    // Declare and assign a lambda function to a variables
    auto lmbd_function1 = [](double a, double b)
    { std::cout << "a+b: " << (a + b) << std::endl; };

    lmbd_function1(12.0, 27.0);
    lmbd_function1(33.0, 14.0);

    // Declare a lambda function that return something
    auto result = [](double a, double b)
    { return (a + b); }(11, 11);

    std::cout << "Result: " << result << std::endl;

    // Print result directly using lambda function
    std::cout << "Print Result directly using lambda function: " << [](double a, double b)
    { return (a + b); }(11, 11)
              << std::endl;

    // Passing data to parameter when calling lambda function
    auto lmbd_function2 = [](double a, double b)
    { return (a + b); };
    auto result1 = lmbd_function2(27, 30);
    auto result2 = lmbd_function2(28, 30);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    // Declare lambda function that specially define the return type
    auto lmda_function3 = [](double a, double b) -> int
    {
        return a + b;
    };

    return 0;
}
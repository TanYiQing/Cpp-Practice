#include <iostream>

int main()
{

    // Braced Initializers
    int num1; // Variable may contain random garbage value

    int num2{}; // Variable initializes to zero

    int num3{10}; // Variable initializes to 10

    int num4{15}; // Variable initializes to 15

    int sum{num3 + num4}; // Use expression as initializer

    std::cout << "Number 1: " << num1 << std::endl;
    std::cout << "Number 2: " << num2 << std::endl;
    std::cout << "Number 3: " << num3 << std::endl;
    std::cout << "Number 4: " << num4 << std::endl;
    std::cout << "Sum of Number 3 and Number 4: " << sum << std::endl;

    // Functional Initialization
    int functionalNum1(5);
    int functionalNum2(10);
    int functionalNum3(functionalNum1 + functionalNum2);
    int narrowingConversionFunctional(2.9); // Information will loss, which keep only 2

    std::cout << "Number 1: " << functionalNum1 << std::endl;
    std::cout << "Number 2: " << functionalNum2 << std::endl;
    std::cout << "Number 3: " << functionalNum3 << std::endl;
    std::cout << "Narrowing Conversion Functional: " << narrowingConversionFunctional << std::endl;

    // Assignment Initialization
    int asgNum1 = 5;
    int asgNum2 = 10;
    int asgSum = asgNum1 + asgNum2;
    int narrowingConversionAssignment = 2.9; // Information will loss, which keep only 2

    std::cout << "Number 1: " << asgNum1 << std::endl;
    std::cout << "Number 2: " << asgNum2 << std::endl;
    std::cout << "Number 3: " << asgSum << std::endl;
    std::cout << "Narrowing Conversion Functional: " << narrowingConversionAssignment << std::endl;

    return 0;
}
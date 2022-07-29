#include <iostream>
#include <iomanip> //Control Precision of std

int main()
{
    // Declare and initialize the variables
    float number1{1.12345678901234567890f}; // Precision : 7 (After that is garbage value)
    double number2{1.12345678901234567890}; // Precision : 15 (After that is garbage value)
    long double number3{1.12345678901234567890L};

    // Print out the sizes
    std::cout << "Size of float : " << sizeof(float) << std::endl;
    std::cout << "Size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of long double : " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(20);                   // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; // 7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits

    float number4{192125221.0f};  // float
    double number5{192125221.0f}; // Still float because .0f behind, which will cast to float
    double number6{192125221.0};  // double

    std::cout << "Number 4: " << number4 << std::endl;
    std::cout << "Number 5: " << number5 << std::endl;
    std::cout << "Number 6: " << number6 << std::endl;
}
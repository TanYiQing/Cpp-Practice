#include <iostream>
int main()
{

    int int_value{27};
    double double_value{20.2};

    int &reference_int_value1{int_value};          // Declare and initialize must be in one statement
    int &reference_int_value2 = int_value;         // Declare and initialize must be in one statement
    double &reference_double_value1{double_value}; // Declare and initialize must be in one statement

    std::cout << std::endl;
    std::cout << "int_value: " << int_value << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "reference_int_value1: " << reference_int_value1 << std::endl;
    std::cout << "reference_int_value2: " << reference_int_value2 << std::endl;
    std::cout << "reference_double_value1: " << reference_double_value1 << std::endl;
    std::cout << "&int_value: " << &int_value << std::endl;
    std::cout << "&reference_int_value1: " << &reference_int_value1 << std::endl;
    std::cout << "&reference_int_value2: " << &reference_int_value2 << std::endl;
    std::cout << "&reference_double_value1: " << &reference_double_value1 << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&): " << sizeof(int &) << std::endl;
    std::cout << "sizeof(reference_int_value1): " << sizeof(reference_int_value1) << std::endl;

    std::cout << std::endl;
    std::cout << "Modifying data through reference:" << std::endl;
    reference_int_value1 = 55;
    std::cout << "reference_int_value1 (after modified): " << reference_int_value1 << std::endl;

    std::cout << "Modifying data through variable:" << std::endl;
    int_value = 1000;
    std::cout << "reference_int_value1 (after modified): " << reference_int_value1 << std::endl;

    return 0;
}
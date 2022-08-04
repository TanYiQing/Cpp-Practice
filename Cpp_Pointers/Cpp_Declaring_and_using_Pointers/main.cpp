#include <iostream>

int main()
{
    // Declare and initialize pointer
    int *p_number{};           // Will initialize to nullptr (null pointer)
    double *p_fractionalNum{}; // Will initialize to nullptr (null pointer)

    int *p_number1{nullptr};           // Will explicitly initialize to nullptr (null pointer)
    double *p_fractionalNum1{nullptr}; // Will explicitly initialize to nullptr (null pointer)

    // Pointers to different variables are of the same size
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(int *): " << sizeof(int *) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(double *): " << sizeof(double *) << std::endl;
    std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractionalNum1): " << sizeof(p_fractionalNum1) << std::endl;

    // Initialize pointers with data
    int int_var{48};
    int *p_int{&int_var};

    std::cout << "int var: " << int_var << std::endl;
    std::cout << "p_int (Address in memory): " << p_int << std::endl;

    int int_var1{50};
    p_int = &int_var1; // Change the data in pointer
    std::cout << "p_int after modified (Address in memory): " << p_int << std::endl;

    // Dereferencing a pointer
    int *p_int2{};
    int int_data{27};
    p_int2 = &int_data;
    std::cout << "Value in pointer: " << *p_int2 << std::endl;

    return 0;
}
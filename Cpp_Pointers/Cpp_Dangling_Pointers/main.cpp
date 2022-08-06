#include <iostream>

int main()
{
    // Dangling Pointer - A pointer that does'nt point to valid memory address. Trying to dereference and use a dangling pointer will result in undefined behaviour
    // Kind of Danling Pointers:
    // 1. Uninitialized pointer
    // 2. Deleted Pointer
    // 3.Multiple pointer pointing to same memory

    // Non Initialized Pointer //Solution: Initialized pointer when declare
    int *p_number;
    std::cout << std::endl;
    std::cout << "Case 1: Uninitialized Pointer: " << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    // std::cout << "*p_number: " << *p_number << std::endl; // Crash

    // Deleted pointer //Solution: Set pointer to nullptr when delete
    std::cout << std::endl;
    std::cout << "Case 2: Deleted Pointer: " << std::endl;
    int *p_number1{new int(27)};
    std::cout << "*p_number1 (before delete): " << *p_number1 << std::endl;
    delete p_number1;
    std::cout << "*p_number1 (after delete): " << *p_number1 << std::endl;

    // Multiple pointer //Solution: Use if else to check wether the master pointer is nullptr. If it is, the don't use it
    std::cout << std::endl;
    std::cout << "Case 3: Multiple Pointer: " << std::endl;
    int *p_number3{new int(28)};
    int *p_number4{p_number3};

    std::cout << "p_number3: " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4: " << p_number4 << " - " << *p_number4 << std::endl;

    delete p_number3;

    std::cout << "p_number4 (after delete p_number3): " << p_number4 << " - " << *p_number4 << std::endl;

    return 0;
}
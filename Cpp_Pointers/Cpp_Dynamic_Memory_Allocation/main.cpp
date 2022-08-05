#include <iostream>
int main()
{
    // This is the way of using pointers, and it is store at stack memory
    int number{27};
    int *pointer_number{&number};

    std::cout << "Number: " << number << std::endl;
    std::cout << "Pointer_number: " << pointer_number << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "&pointer_number: " << *pointer_number << std::endl;

    int *pointer_number1;
    int number1{12};
    pointer_number = &number1;
    std::cout << std::endl;
    std::cout << "Uninitialized pointer: " << std::endl;
    std::cout << "*pointer_number1: " << *pointer_number << std::endl;
    /*
        // BAD Practice 1
        int *pointer_number2;  // Contain junk address because didnt intialized
        *pointer_number2 = 55; // Writing into junk address
        // Solution: Need to intialize the pointer

        // BAD Practice 2
        std::cout << "pointer_number2: " << pointer_number2 << std::endl;
        std::cout << "*pointer_number2: " << *pointer_number2 << std::endl; // Dereferencing bad memory

        // BAD Practice 3
        int *pointer_number3{}; // nullptr
        *pointer_number3 = 33;  // Writing into pointer that pointing to unknow address

        std::cout << "pointer_number3: " << pointer_number3 << std::endl;
        std::cout << "*pointer_number3: " << *pointer_number3 << std::endl;
    */

    // Dynamic heap memory
    int *pointer_number4{nullptr};
    pointer_number4 = new int;
    // Dynamically allocate space for a single int on the heap
    // This memory belongs to our program from now on. The system
    // can't use it for anything else, untill we return it.
    // After this line executes, we will have a valid memory location
    // allocated. The size of the allocated memory will be such that it
    // can store the type pointed to by the pointer

    *pointer_number4 = 27; // Writing into dynamically allocated address
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory: " << std::endl;
    std::cout << "*pointer_number4: " << *pointer_number4 << std::endl;

    delete pointer_number4; // Return the memory to the operating system
    pointer_number4 = nullptr;

    int *pointer_number5{new int};     // Memory location contains junk value
    int *pointer_number6{new int(22)}; // use direct initialization
    int *pointer_number7{new int{23}}; // use uniform initialization

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration : " << std::endl;
    std::cout << "pointer_number5 : " << pointer_number5 << std::endl;
    std::cout << "*pointer_number5 : " << *pointer_number5 << std::endl; // Junk value

    std::cout << "pointer_number6 : " << pointer_number6 << std::endl;
    std::cout << "*pointer_number6 : " << *pointer_number6 << std::endl;

    std::cout << "pointer_number7 : " << pointer_number7 << std::endl;
    std::cout << "*pointer_number7 : " << *pointer_number7 << std::endl;

    // Release Pointer
    delete pointer_number5;
    pointer_number5 = nullptr;

    delete pointer_number6;
    pointer_number6 = nullptr;

    delete pointer_number7;
    pointer_number7 = nullptr;

    pointer_number5 = new int(88);
    std::cout << "*p_number : " << *pointer_number5 << std::endl;

    delete pointer_number5;
    pointer_number5 = nullptr;

    return 0;
}
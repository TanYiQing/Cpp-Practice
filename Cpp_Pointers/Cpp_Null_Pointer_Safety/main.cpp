#include <iostream>

int main()
{
    // Null pointer safety -  Make sure the pointers containing a valid memory address
    std::cout << std::endl;
    std::cout << "Verbose nullptr check: " << std::endl;

    int *p_number{}; // Initialized to nullptr
    p_number = new int(27);

    // if (!(p_number == nullptr))
    // {
    //     std::cout << "p_number points to a valid address: " << p_number << " - " << *p_number << std::endl;
    // }
    // else
    // {
    //     std::cout << "p_number points to an invalid address" << std::endl;
    // }

    if (p_number)
    {
        std::cout << "p_number points to a valid address: " << p_number << " - " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to an invalid address" << p_number << std::endl;
    }

    delete p_number;
    p_number = nullptr;

    return 0;
}
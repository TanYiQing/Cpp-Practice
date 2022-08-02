#include <iostream>

int main()
{

    for (unsigned int i{}; i < 10; i++)
    {
        std::cout << "Hello C++" << std::endl;
    }
    std::cout << "Loop Done" << std::endl;

    for (size_t i{}; i < 10; i++) // size_t - representation for some unsigned int for positive numbers
    {
        std::cout << "This is C++" << std::endl;
    }
    std::cout << "Loop Finished" << std::endl;

    return 0;
}
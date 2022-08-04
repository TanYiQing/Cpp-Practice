#include <iostream>

int main()
{
    // Declaring an array
    int scores[10];
    double salaries[3]{};               // Elements will be initialized to 0
    int week[]{1, 2, 3, 4, 5, 6, 7};    // Array size will automatic initialized depend on the number of elements inside
    const int multiplers[]{22, 30, 15}; // Constant array: elements inside can't be change

    // Initialize data in array
    scores[0] = 99;
    scores[1] = 12;
    scores[2] = 27;

    std::cout << std::endl;

    // Write data into array
    for (int i = 3; i < 10; i++)
    {
        scores[i] = i * 2;
    }

    // Read data from array
    for (int i = 0; i < 10; i++)
    {
        std::cout << "[" << i << "] " << scores[i] << std::endl;
    }

    for (auto value : week)
    {
        std::cout << value << std::endl;
    }

    return 0;
}
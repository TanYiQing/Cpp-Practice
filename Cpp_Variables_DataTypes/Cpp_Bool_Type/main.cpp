#include <iostream>

int main()
{
    bool stop{true};
    bool go{false};

    if (stop == true)
    {
        std::cout << "Let's Go!" << std::endl;
    }
    else
    {
        std::cout << "Stop!" << std::endl;
    }

    if (stop)
    {
        std::cout << "Please Stop!" << std::endl;
    }
    else
    {
        std::cout << "Please Go!" << std::endl;
    }

    std::cout << stop << std::endl; // Print out 1 because of true
    std::cout << go << std::endl;   // Print out 0 because of false

    std::cout << std::boolalpha;    // setting to make the terminal print out true or false instead of 1 or 0f
    std::cout << stop << std::endl; // Print out true
    std::cout << go << std::endl;   // Print out false

    return 0;
}
#include <iostream>
#include <string>

int main()
{
    // Output (cout)
    std::cout << "Hello C++" << std::endl;

    int age = 23;
    std::cout << "Age: " << age << std::endl;

    // Error Message (cerr)
    std::cerr << "Error Message: This is an Error Message." << std::endl;

    // Log Message (clog)
    std::clog << "Log Message: This is a Log Message." << std::endl;

    int age1;
    std::string name;

    // First Way of Input
    std::cout << "Please enter your name and age here:" << std::endl;
    std::cin >> name;
    std::cin >> age1;
    std::cout << "Hello " << name << " with age " << age1 << " years old" << std::endl;

    // Second Way of Input
    std::cout << "Please enter your name and age here:" << std::endl;
    std::cin >> name >> age1;
    std::cout << "Hello " << name << " with age " << age1 << " years old" << std::endl;

    // Input String with space
    std::string fullName;
    std::cout << "Please enter your name and age here:" << std::endl;
    std::getline(std::cin, fullName);
    std::cin >> age1;
    std::cout << "Hello " << fullName << " with age " << age1 << " years old" << std::endl;

    return 0;
}

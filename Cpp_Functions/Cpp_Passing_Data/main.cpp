#include <iostream>

void reply(int number)
{
    std::cout << "Hello, your age are: " << number << std::endl;
}

void reply_pointer(int *number)
{
    std::cout << "Hello, your age are: " << *number << std::endl;
}

void reply_reference(int &number)
{
    std::cout << "Hello, your age are: " << number << std::endl;
}

int main()
{
    int age = 23;

    // Passing by value
    reply(age);

    // Passing by pointer
    reply_pointer(&age);

    // Passing by reference
    reply_reference(age);

    return 0;
}
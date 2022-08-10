#include <iostream>

void validateAge(unsigned int age)
{
    if (age >= 18)
    {
        std::cout << "You are " << age << " years old, please proceed." << std::endl;
    }
    else
    {
        std::cout << "You are just " << age << " years old, please come again when you are 18 years old." << std::endl;
    }
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void helloWorld()
{
    std::cout << "Hello World!" << std::endl;
}

int main()
{
    for (int i = 0; i < 25; i++)
    {
        validateAge(i);
    }

    int maximumNum = max(5, 3);

    std::cout << "Maximum Number: " << maximumNum << std::endl;
    helloWorld();

    return 0;
}
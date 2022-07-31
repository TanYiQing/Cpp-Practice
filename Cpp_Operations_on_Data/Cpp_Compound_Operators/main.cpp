#include <iostream>

int main()
{
    int value{27};
    value += 5;
    std::cout << "Value +=5: " << value << std::endl;

    value = 27;
    value -= 5;
    std::cout << "Value -=5: " << value << std::endl;

    value = 27;
    value *= 5;
    std::cout << "Value *=5: " << value << std::endl;

    value = 27;
    value /= 5;
    std::cout << "Value /=5: " << value << std::endl;

    value = 27;
    value %= 5;
    std::cout << "Value %=5: " << value << std::endl;
    return 0;
}
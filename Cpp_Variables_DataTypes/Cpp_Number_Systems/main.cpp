#include <iostream>

int main()
{
    int num1 = 15;         // Decimal
    int num2 = 017;        // Octal
    int num3 = 0x0F;       // Hexadecimal
    int num4 = 0b00001111; // Binary

    std::cout << "Number 1:" << num1 << std::endl;
    std::cout << "Number 2:" << num2 << std::endl;
    std::cout << "Number 3:" << num3 << std::endl;
    std::cout << "Number 4:" << num4 << std::endl;

    return 0;
}
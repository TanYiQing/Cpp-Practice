#include <iostream>

int main()
{
    int num1{123};
    std::cout << "Number 1: " << num1 << std::endl;
    num1 = 789;
    std::cout << "Number 1 become: " << num1 << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    double doub1{123.49};
    std::cout << "Double 1: " << doub1 << std::endl;
    doub1 = 246.89;
    std::cout << "Double 1 become: " << doub1 << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    bool bool1{false};
    std::cout << std::boolalpha;
    std::cout << "Boolean 1: " << bool1 << std::endl;
    bool1 = true;
    std::cout << "Boolean 1 become: " << bool1 << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    auto auto1{123u}; // unsigned
    std::cout << "Auto 1: " << auto1 << std::endl;
    auto1 = -123;
    std::cout << "Auto 1 become: " << auto1 << std::endl;

    return 0;
}
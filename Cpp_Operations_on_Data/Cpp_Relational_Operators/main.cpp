#include <iostream>
int main()
{
    int num1{12};
    int num2{27};

    std::cout << "Number 1: " << num1 << std::endl;
    std::cout << "Number 2: " << num2 << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;

    // Must put (), else will show compilation error
    std::cout << "Number 1 < Number 2: " << (num1 < num2) << std::endl;
    std::cout << "Number 1 > Number 2: " << (num1 > num2) << std::endl;
    std::cout << "Number 1 <= Number 2: " << (num1 <= num2) << std::endl;
    std::cout << "Number 1 >= Number 2: " << (num1 >= num2) << std::endl;
    std::cout << "Number 1 == Number 2: " << (num1 == num2) << std::endl;
    std::cout << "Number 1 != Number 2: " << (num1 != num2) << std::endl;

    return 0;
}
#include <iostream>
// using namespace std;

int addNumbers(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}

int main()
{
    int firstNum{4};
    int secondNum{4};

    std::cout << "First Number: " << firstNum << std::endl;
    std::cout << "Second Number: " << secondNum << std::endl;

    //First Way
    int sum1 = firstNum + secondNum;
    std::cout << "Sum Number: " << sum1 << std::endl;

    //Second Way
    int sum2 = addNumbers(firstNum, secondNum);
    std::cout << "Sum Number: " << sum2 << std::endl;

    //Third Way
    std::cout << "Sum Number: " << addNumbers(firstNum, secondNum) << std::endl;

    return 0;
}

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
    // cout << "First Number: " << firstNum << endl;
    std::cout << "Second Number: " << secondNum << std::endl;
    // cout << "Second Number: " << secondNum << endl;

    //First Way
    int sum1 = firstNum + secondNum;
    std::cout << "Sum Number: " << sum1 << std::endl;
    // cout << "Sum Number: " << sum1 << endl;

    //Second Way
    int sum2 = addNumbers(20, 120);
    std::cout << "Sum Number: " << sum2 << std::endl;
    // cout << "Sum Number: " << sum2 << endl;

    //Third Way
    std::cout << "Sum Number: " << addNumbers(firstNum, secondNum) << std::endl;
    // cout << "Sum Number: " << addNumbers(firstNum, secondNum) << endl;

    return 0;
}

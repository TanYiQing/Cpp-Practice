#include <iostream>
int main()
{
    bool a{true};
    bool b{false};
    bool c{true};
    int d{20};
    int e{27};
    int f{32};

    std::cout << std::boolalpha;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl;
    std::cout << "Basic AND Operators:" << std::endl;
    std::cout << "a && b: " << (a && b) << std::endl;
    std::cout << "a && c: " << (a && c) << std::endl;
    std::cout << "a && b && c: " << (a && b && c) << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Basic OR Operators:" << std::endl;
    std::cout << "a || b: " << (a || b) << std::endl;
    std::cout << "a || c: " << (a || c) << std::endl;
    std::cout << "a || b || c: " << (a || b || c) << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Basic NOT Operators:" << std::endl;
    std::cout << "!a: " << (!a) << std::endl;
    std::cout << "!b: " << (!b) << std::endl;
    std::cout << "!c: " << (!c) << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Combination of all Logical Operators:" << std::endl;
    std::cout << "!(a&&b)||c: " << (!(a && b) || c) << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Combination of Logical Operators and Relational Operators:" << std::endl;
    std::cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << std::endl;

    return 0;
}
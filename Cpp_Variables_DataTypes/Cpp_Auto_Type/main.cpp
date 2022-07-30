#include <iostream>

int main()
{
    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    // int modifier suffixes
    auto var6=123u;  // unsigned
    auto var7{123ul}; // unsigned long_var
    auto var8{123ll}; // long long

    std::cout << "Var 1 Occupies: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "Var 2 Occupies: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "Var 3 Occupies: " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "Var 4 Occupies: " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "Var 5 Occupies: " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "Var 6 Occupies: " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "Var 7 Occupies: " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "Var 8 Occupies: " << sizeof(var8) << " bytes" << std::endl;

    return 0;
}
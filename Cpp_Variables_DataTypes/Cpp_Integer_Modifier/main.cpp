#include <iostream>

int main()
{
    // Without Modifier
    int value1{10};
    int value2{-300};

    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;

    std::cout << "Size of Value 1: " << sizeof(value1) << std::endl; // 4 bytes
    std::cout << "Size of Value 2: " << sizeof(value2) << std::endl; // 4 bytes

    // With signed/unsinged Modifier
    signed int value3{10};
    signed int value4{-300};

    unsigned int value5{10};
    /*unsigned int value6{-300}; //Compiler Error (unsigned modifier only accept positive value)*/

    //short Modifier (2 bytes)
    short short_var{-32152};
    short int short_int {123};
    signed short signed_short{122};
    signed short int signedshortint{1234};

    //long Modifier (4 or 8 bytes)
    long long_var{-32152};
    long int long_int {123};
    signed long signed_long{122};
    signed long int signedlongint{1234};

    //8 bytes
    long long longlong_var{-32152};
    long long int longlong_int {123};
    signed long long signed_longlong{122};
    signed long long int signedlonglongint{1234};




    return 0;
}
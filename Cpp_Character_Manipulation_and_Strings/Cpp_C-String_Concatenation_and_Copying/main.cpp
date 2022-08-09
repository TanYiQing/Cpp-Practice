#include <iostream>
#include <cstring>

int main()
{
    // std::strcat - let two string joining together (concatenation)
    std::cout << std::endl;
    std::cout << "std::strcat: " << std::endl;

    char dest[50] = "Hello ";
    char src[50] = "World!";
    std::strcat(dest, src);
    std::strcat(dest, " Goodbye World!");
    std::cout << "dest: " << dest << std::endl;

    std::cout << std::endl;
    std::cout << "More std::strcat: " << std::endl;

    char *desc1 = new char[30]{'F', 'I', 'R', 'E', 'L', 'O', 'R', 'D', '\0'};
    char *source1 = new char[30]{',', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '\0'};

    std::cout << "std::strlen(desc1): " << std::strlen(desc1) << std::endl;
    std::cout << "std::strlen(source1): " << std::strlen(source1) << std::endl;

    std::cout << "Concatenating..." << std::endl;
    std::strcat(desc1, source1);

    std::cout << "std::strlen(desc1): " << std::strlen(desc1) << std::endl;
    std::cout << "desc1: " << desc1 << std::endl;

    // str::strncat - specify how many characters to concatenate
    std::cout << std::endl;
    std::cout << "str::strncat: " << std::endl;
    char desc2[50] = {"Hello"};
    char source2[30] = {"There is a bird on my window"};
    // std::cout << std::strncat(desc2, source2, 6) << std::endl;
    std::strncat(desc2, source2, 6);
    std::cout << "The concatenated string is: " << desc2 << std::endl;

    // std::strcpy - copy the string at the right handside and put into the left hand side
    std::cout << std::endl;
    std::cout << "std::strcpy: " << std::endl;
    const char *source3 = "C++ is a multipurpose programming language.";
    char *desc3 = new char[std::strlen(source3) + 1]; //+1 is for the count of null character, because strlen is not couting the null character
    std::strcpy(desc3, source3);

    std::cout << "sizeof(desc3): " << sizeof(desc3) << std::endl;
    std::cout << "std::strlen(desc3): " << std::strlen(desc3) << std::endl;
    std::cout << "desc3: " << desc3 << std::endl;

    // std::strncpy - copy the specific number of character in the string at the right handside and put into the left hand side
    std::cout << std::endl;
    std::cout << "std::strncpy: " << std::endl;
    const char *source4 = "Hello";
    char desc4[] = {
        'a',
        'b',
        'c',
        'd',
        'e',
        'f',
        '\0',
    };
    std::cout << "desc4: " << desc4 << std::endl;
    std::cout << "Copying..." << std::endl;
    std::strncpy(desc4, source4, 5);
    std::cout << "desc4: " << desc4 << std::endl;
    
    return 0;
}
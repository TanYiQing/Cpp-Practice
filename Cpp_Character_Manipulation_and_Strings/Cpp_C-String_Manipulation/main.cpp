#include <iostream>
#include <cstring>

int main()
{
    // std::strlen - Find the length of a strig, regardless to array style or pointer style string
    const char message1[]{"The sky is blue today"};
    const char *message2{"The sky is purple"};
    std::cout << std::endl;
    std::cout << "Message 1: " << message1 << std::endl;
    std::cout << "Message 2: " << message2 << std::endl;
    std::cout << "strlen(message1): " << strlen(message1) << std::endl;
    std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;
    std::cout << "strlen(message2): " << strlen(message2) << std::endl;
    std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

    // std::strcmp - compare strings on left and right. Output will be negative if left handside is smaller, positive if right handside is smaller, 0 if both are equal
    std::cout << std::endl;
    const char *string_data1{"Clamak"};
    const char *string_data2{"Blamak"};

    const char string_data3[]{"Alamak"};
    const char string_data4[]{"Blamak"};

    std::cout << "std::strcmp(" << string_data1 << "," << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl;
    std::cout << "std::strcmp(" << string_data3 << "," << string_data4 << "): " << std::strcmp(string_data3, string_data4) << std::endl;

    string_data1 = "hahaha";
    string_data2 = "hahaha";

    std::cout << "std::strcmp(" << string_data1 << "," << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl;

    // std::strncmp - compare left and right side of string with number of character specified. Output will be negative if left handside is smaller, positive if right handside is smaller, 0 if both are equal
    std::cout << std::endl;
    size_t n{3};
    std::cout << "std::strncmp:" << std::endl;
    std::cout << "std::strncmp(" << string_data1 << "," << string_data2 << "): " << std::strncmp(string_data1, string_data2, n) << std::endl;

    // std::chr - find all characters one by one
    std::cout << std::endl;
    const char *str{"Try not. Do, or do not. There is no try"};
    char target = 'T';
    const char *result = str;
    int iterations{};

    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found " << target << " starting at '" << result << "'\n";
        result++;
        iterations++;
        std::cout << result << std::endl;
    }
    std::cout << "Iterations: " << iterations << std::endl;

    // std::strrchr - find last occurence target
    std::cout << std::endl;
    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');
    if (output)
        std::cout << output + 1 << std::endl;
    return 0;
}

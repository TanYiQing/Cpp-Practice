#include <iostream>
int main()
{
    // Check if character is alphanumeric
    std::cout << std::endl;
    std::cout << "std::isalnum: " << std::endl;

    std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl;
    std::cout << "7 is alphanumeric: " << std::isalnum('7') << std::endl;

    // Check if character is alphabetic
    std::cout << std::endl;
    std::cout << "std::isalpha: " << std::endl;

    std::cout << "C is alphabetic: " << std::isalpha('C') << std::endl;
    std::cout << "^ is alphabetic: " << std::isalpha('^') << std::endl;
    std::cout << "7 is alphabetic: " << std::isalpha('7') << std::endl;

    // Find and print blank index
    std::cout << std::endl;
    int blank{};
    char message[]{"Hello, my name is Tan Yi Qing."};
    for (int i{0}; i < std::size(message); i++)
    {
        if (std::isblank(message[i]))
        {
            std::cout << "Blank character at index " << i << " found!" << std::endl;
            blank++;
        }
    }
    std::cout << "Total blank: " << blank << std::endl;

    // Check if character is uppercase or lowercase
    std::cout << std::endl;
    char message1[]{"This is the first time I learn C++"};
    int lower{};
    int upper{};

    for (int i{0}; i < std::size(message1); i++)
    {
        if (std::isupper(message1[i]))
        {
            std::cout << "Uppercase character at index " << i << " found!" << std::endl;
            upper++;
        }
        else
        {
            std::cout << "Lowercase character at index " << i << " found!" << std::endl;
            lower++;
        }
    }
    std::cout << "Total uppercase character: " << upper << std::endl;
    std::cout << "Total lowercase character: " << lower << std::endl;

    // Check if character is digit
    std::cout << std::endl;
    std::cout << "std::isdigit: " << std::endl;

    std::cout << "C is digit: " << std::isdigit('C') << std::endl;
    std::cout << "^ is digit: " << std::isdigit('^') << std::endl;
    std::cout << "7 is digit: " << std::isdigit('7') << std::endl;

    // Change character to uppercase or lowercase
    std::cout << std::endl;
    std::cout << "std::tolwer and std::toupper: " << std::endl;
    char original_str[]{"Home. The feeling of belonging"};
    char dest_str[std::size(original_str)];

    // Turn this to uppercase. Change the array in place
    for (size_t i{}; i < std::size(original_str); ++i)
    {
        dest_str[i] = std::toupper(original_str[i]);
    }

    std::cout << "Original string : " << original_str << std::endl;
    std::cout << "Uppercase string : " << dest_str << std::endl;

    // Turn this to lowercase. Change the array in place
    for (size_t i{}; i < std::size(original_str); ++i)
    {
        dest_str[i] = std::tolower(original_str[i]);
    }

    std::cout << "Lowercase string : " << dest_str << std::endl;

    return 0;
}
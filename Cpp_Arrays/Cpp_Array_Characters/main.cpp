#include <iostream>
int main()
{
    // Declare an array
    char message[]{'H', 'E', 'L', 'L', 'O'};

    std::cout << "Message: ";
    for (auto character : message)
    {
        std::cout << character;
    }

    std::cout << std::endl;

    message[1] = 'A'; // Modifying element

    std::cout << "Message after modified: ";
    for (auto character : message)
    {
        std::cout << character;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    char msg[6]{'H', 'E', 'L', 'L', 'O', '\0'}; // Using \0 to let the compiler know that the string will stop there
    std::cout << "Message print direct: " << msg << std::endl;

    std::cout << std::endl;
    char stringmessage[]{"Hello World"}; // C-String
    std::cout << "Message in string: " << stringmessage << std::endl;

    return 0;
}
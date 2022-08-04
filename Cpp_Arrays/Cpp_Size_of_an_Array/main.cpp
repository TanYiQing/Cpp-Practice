#include <iostream>
int main()
{

    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    std::cout << "Scores size: " << std::size(scores) << std::endl;

    for (int result : scores)
    {
        std::cout << result;
    }
    std::cout << std::endl;
    for (int i = 0; i < std::size(scores); i++)
    {
        std::cout << scores[i];
    }
    std::cout << std::endl;
    std::cout << "Size of scores: " << sizeof(scores) << std::endl;
    std::cout << "Size of scores[0]: " << sizeof(scores[0]) << std::endl;
    std::cout << "Score item count: " << (sizeof(scores) / sizeof(scores[0])) << std::endl;

    return 0;
}
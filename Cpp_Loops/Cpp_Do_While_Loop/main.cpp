#include <iostream>

int main()
{
    const unsigned int COUNT{10};
    unsigned int i{1};

    do
    {
        std::cout << i << std::endl;
        i++;

    } while (i < COUNT);
    return 0;
}
#include <iostream>
int main()
{

    // try and catch
    try
    {
        int *data = new int[10000000000000000]; // Heap storage is finite, so it will crash the program.
        std::cout << "Program ending well" << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cout << "Program not ending well: " << ex.what() << std::endl;
    }

    // std::nothrow
    int *data1 = new (std::nothrow) int[10000000000000000]; // When new fail, it will get null pointer in this data

    if (data1 != nullptr)
    {
        std::cout << "Data allocated" << std::endl;
    }
    else
    {
        std::cout << "Data not allocated" << std::endl;
    }
    return 0;
}
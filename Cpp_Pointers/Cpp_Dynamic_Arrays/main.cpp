#include <iostream>
int main()
{
    // Dynamic array -  array that live in heap memory

    // Way of declare an dynamic array
    int size = 10;
    double *p_salaries = new double[size]; // elements inside the array will be garbage value

    int *p_students{
        new (std::nothrow) int[size]{}}; // elements inside the array will be initialize to 0

    double *p_scores{
        new (std::nothrow) double[size]{1, 2, 3, 4, 5}}; // elements inside the array will be 1,2,3,4,5, and the rest will be 0

    if (p_scores)
    {
        std::cout << "Size of scores (it's a regular pointer): " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores" << std::endl;

        for (int i = 0; i < size; i++)
        {
            std::cout << "Value: " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }

    delete[] p_salaries; // release memory
    p_salaries = nullptr;

    delete[] p_students; // release memory
    p_students = nullptr;

    delete[] p_scores; // release memory
    p_scores = nullptr;

    // Static Array vs Dynamic Array
    // 1. Static array can use the library std::size(...) while dynamic array couldn't
    // 2. Static array can use range based for loop while dynamic array couldn't
    // 3. Static array live in stack memory while dynamic array live in heap memory

    return 0;
}
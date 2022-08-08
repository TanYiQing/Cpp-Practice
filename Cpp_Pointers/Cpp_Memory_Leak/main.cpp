#include <iostream>
int main()
{
    /*// Memory Leak - When loose access to memory that is dynamically allocated

    // Type 1: Reasign stack address to dynamic address pointer
    int *p_number{new int(27)}; // This pointer pointed to an address 1
    // Should delete and reset memory at here
    int number{5}; // This variable lives in address 2

    p_number = &number; // The pointer changed and pointed to address 2, but the address 1 is still in use and not release. Hence, the program has lost access to this memory address.

    // Type 2: Double allocation
    int *p_number{new int(27)}; // This pointer pointed to an address 1
    p_number = new int(55);     // This pointer pointed to an address 2, and the memory with int(27) lost. Hence the address is leak

    // Type 3: Pointer in local scope
    {
      int *p_number2{new int(12)};
    } // After this block, the pointer will die, but the memory will keep alive. Hence, the memory leak.*/

    return 0;
}
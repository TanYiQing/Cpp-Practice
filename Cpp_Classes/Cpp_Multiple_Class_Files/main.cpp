#include <iostream>
#include "constants.h"
#include "cylinder.h"

int main()
{
    Cylinder cylinder1(2, 3); // Objects
    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    // Modify object
    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);

    std::cout << "Volume using getter setter: " << cylinder1.volume() << std::endl;
    return 0;
}
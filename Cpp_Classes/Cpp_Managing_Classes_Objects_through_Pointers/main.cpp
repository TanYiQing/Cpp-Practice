#include <iostream>
#include "constants.h"
#include "cylinder.h"

int main()
{
    Cylinder cylinder1(2, 3); // Objects
    cylinder1.volume();

    // Managing a stack object through pointers
    Cylinder *p_cylinder1 = &cylinder1;
    std::cout << "Volume 1: " << (*p_cylinder1).volume() << std::endl;
    std::cout << "Volume 1: " << p_cylinder1->volume() << std::endl;

    // Create a heap object through new pointers
    Cylinder *p_cylinder2 = new Cylinder(2, 3);
    std::cout << "Volume 2: " << p_cylinder2->volume() << std::endl;
    std::cout << "base_radius 2: " << p_cylinder2->get_base_radius() << std::endl;

    return 0;
}
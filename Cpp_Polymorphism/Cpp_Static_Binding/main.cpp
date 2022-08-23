#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    Shape shape1("Shape 1");
    shape1.draw();

    Oval oval1(2.0, 3.5, "Oval 1");
    oval1.draw();

    Circle circle1(3.3, "Circle 1");
    circle1.draw();

    // Base pointers
    std::cout << "--------------------Base Pointers--------------------" << std::endl;
    Shape *shape_ptr = &shape1;
    shape_ptr->draw();

    shape_ptr = &oval1;
    shape_ptr->draw(); // Draw oval, but using the constructor in Shape class

    shape_ptr = &circle1;
    shape_ptr->draw(); // Draw circle, but using the constructor in Shape class

    // Base Reference
    std::cout << "--------------------Base Reference--------------------" << std::endl;
    Shape &shape_ref = oval1;
    shape_ref.draw();

    shape_ref = circle1;
    shape_ref.draw();
    return 0;
}
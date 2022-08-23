#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_shape(Shape *s) // Method that take in pointer
{
    s->draw();
}

void draw_shape_ref(const Shape &s_r) // Method that take in reference
{
    s_r.draw();
}
int main()
{
    // If not using virtual, it will use the Shape class
    std::cout << std::endl;
    std::cout << "--------------------Not Good--------------------" << std::endl;
    Shape shape1("Shape 1");
    shape1.draw();

    Oval oval1(2.0, 3.5, "Oval 1");
    oval1.draw();

    Circle circle1(3.3, "Circle 1");
    circle1.draw();
    std::cout << std::endl;

    // Base pointers
    std::cout << "--------------------Base Pointers--------------------" << std::endl;
    Shape *shape_ptr = &shape1;
    shape_ptr->draw();

    shape_ptr = &oval1;
    shape_ptr->draw();

    shape_ptr = &circle1;
    shape_ptr->draw();
    std::cout << std::endl;

    // Base Reference
    std::cout << "--------------------Base Reference--------------------" << std::endl;
    Shape &shape_ref = oval1;
    shape_ref.draw();

    Shape &shape_ref1 = circle1;
    shape_ref1.draw();
    std::cout << std::endl;

    // Draw Shape using Pointer
    std::cout << "--------------------Draw Shape using Pointer--------------------" << std::endl;
    draw_shape(&shape1);
    draw_shape(&oval1);
    draw_shape(&circle1);
    std::cout << std::endl;

    // Draw Shape using Reference
    std::cout << "--------------------Draw Shape using Reference--------------------" << std::endl;
    draw_shape_ref(shape1);
    draw_shape_ref(oval1);
    draw_shape_ref(circle1);
    std::cout << std::endl;

    // Shapes store in collections
    std::cout << "--------------------Shapes store in collections--------------------" << std::endl;
    Shape *shape_collection[]{&shape1, &oval1, &circle1};

    for (Shape *s_ptr : shape_collection)
    {
        s_ptr->draw();
    }

    return 0;
}
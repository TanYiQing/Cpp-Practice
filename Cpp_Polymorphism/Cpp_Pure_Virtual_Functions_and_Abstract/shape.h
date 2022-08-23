#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
protected:
    Shape() = default;
    Shape(std::string_view description);

public:
    virtual ~Shape() = default; // If destructor is not public, you won't be
                                // able to delete base_ptrs. SHOW THIS TO STUDENTS
    // Pure virtual functions
    virtual double perimeter() const = 0; // Using this statement, it will set the function to pure virtual, which means that the whole class will automatically become abstract class
    virtual double surface() const = 0;   // No implementation in pure virtual function

private:
    std::string m_description;
};

#endif // SHAPE_H

#include <iostream>

const double PI{3.145926535897932384626433832795};

class Cylinder
{

public:
    Cylinder() = default; // Set the constructor to default
    Cylinder(double base_radius_param, double height_param)
    {
        base_radius = base_radius_param;
        height = height_param;
    }

    double volume()
    {
        return PI * base_radius * height;
    }

    double get_base_radius()
    {
        return base_radius;
    }

    double get_height()
    {
        return height;
    }

    void set_base_radius(double base_radius_param)
    {
        base_radius = base_radius_param;
    }

    void set_height(double height_param)
    {
        height = height_param;
    }

private:
    double base_radius{1};
    double height{1};
};

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
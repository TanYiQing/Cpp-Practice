#include <iostream>

const double PI{3.145926535897932384626433832795};

class Cylinder
{

public:
    Cylinder()
    {
        base_radius = 2.0;
        height = 2.0;
    }

    Cylinder(double base_radius_param, double height_para)
    {
        base_radius = base_radius_param;
        height = height_para;
    }

public: // Will be private in default if no this line
    double volume()
    {
        return PI * base_radius * height;
    }

private:
    double base_radius{1};
    double height{1};
};

int main()
{
    Cylinder cylinder1; // Objects
    std::cout << "Volume (Using constructor without parameters): " << cylinder1.volume() << std::endl;
    Cylinder cylinder2(25, 23); // Objects
    std::cout << "Volume (Using constructor with parameters): " << cylinder2.volume() << std::endl;
    // std::cout << "Volume: (After modify the variables)" << cylinder1.volume() << std::endl;
    return 0;
}
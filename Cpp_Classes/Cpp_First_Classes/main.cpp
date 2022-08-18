#include <iostream>

const double PI{3.145926535897932384626433832795};

class Cylinder
{
public:
    double base_radius{};
    double height{};

public: // Will be private in default if no this line
    double volume()
    {
        return PI * base_radius * height;
    }
};

int main()
{
    Cylinder cylinder1; // Objects
    cylinder1.base_radius = 2.3;
    cylinder1.height = 5;
    std::cout << "Volume: " << cylinder1.volume() << std::endl;
    return 0;
}
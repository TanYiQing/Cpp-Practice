#include <iostream>

const double PI{3.145926535897932384626433832795};

class Cylinder
{

public:
    Cylinder() = default; // Set the constructor to default

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

    return 0;
}
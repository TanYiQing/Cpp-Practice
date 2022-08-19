#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"
class Cylinder
{

public:
    Cylinder() = default; // Set the constructor to default
    Cylinder(double base_radius_param, double height_param);

    double volume();
    double get_base_radius();
    double get_height();
    void set_base_radius(double base_radius_param);
    void set_height(double height_param);

private:
    double base_radius{1};
    double height{1};
};

#endif
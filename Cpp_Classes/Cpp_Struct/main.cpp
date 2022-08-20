#include <iostream>
#include <string>

// Struct and Class only different in the variable in Struct is public by default, and the variable in class is private by default.
// Can use Struct when there is no need of method or function in the class, and only need to access the variable; vice versa for class.

class Dog // Private by default
{
    std::string name;

public:
    std::string dog_name;
};

struct Cat // Public by default
{
public:
    std::string name;
};

int main()
{
    Dog dog1;
    Cat cat1;

    // dog1.name = "Fluffy"; // Cannot access, because it is private by default
    cat1.name = "Kitty"; // Can access, because it is public by default
    std::cout << "Cat 1 name: " << cat1.name << std::endl;
    dog1.dog_name = "Bobby";
    std::cout << "Dog 1 name: " << dog1.dog_name << std::endl; // Can access, because it changes to public

    return 0;
}
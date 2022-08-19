#include <iostream>
#include <string_view>

class Dog
{
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

    void print_info()
    {
        std::cout << "Dog (" << this << "): [name: " << name << " breed: " << breed << " age:" << *p_age << "]" << std::endl;
    }
    // Setters
    // void set_name(std::string_view name)
    // {
    //     this->name = name;
    // }

    // void set_breed(std::string_view breed)
    // {
    //     this->breed = breed;
    // }

    // void set_age(int age)
    // {
    //     *(this->p_age) = age;
    // }

    // Chained call using pointers
    // Dog *set_name(std::string_view name)
    // {
    //     this->name = name;
    //     return this;
    // }

    // Dog *set_breed(std::string_view breed)
    // {
    //     this->breed = breed;
    //     return this;
    // }

    // Dog *set_age(int age)
    // {
    //     *(this->p_age) = age;
    //     return this;
    // }

    // Chained call using references
    Dog &set_name(std::string_view name)
    {
        this->name = name;
        return *this;
    }

    Dog &set_breed(std::string_view breed)
    {
        this->breed = breed;
        return *this;
    }

    Dog &set_age(int age)
    {
        *(this->p_age) = age;
        return *this;
    }

private:
    std::string name;
    std::string breed;
    int *p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int p_age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = p_age_param;
    std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
}

Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destructor called for " << name << " at " << this << std::endl;
}

int main()
{
    Dog dog1("Fluffy", "Steward", 2);
    dog1.print_info();

    // dog1.set_name("Husky");
    // dog1.set_breed("Fox");
    // dog1.set_age(3);

    // dog1.set_name("Husky")->set_breed("Fox")->set_age(3); // Chain statement using return pointer

    dog1.set_name("Haha").set_breed("Mimi").set_age(4); // Chain statement using return references
    dog1.print_info();

    std::cout << "Done!" << std::endl;
    return 0;
}
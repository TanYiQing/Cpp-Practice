#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

// Engineer is doing private inheritance

class Engineer : private Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &operand);

public:
    Engineer();
    ~Engineer();

    void build_something()
    {
        m_full_name = "John Snow"; // OK
        m_age = 23;                // OK
        // m_address = "897-78-723"; Compiler error
    }

protected:
    using Person::get_address; // use using syntax to resurect members access
    using Person::get_age;
    using Person::get_full_name;

    // can resurect members with public and protected but cannot for private
    int get_contract_count() const
    {
        return contract_count;
    }

private:
    int contract_count{0};
};

#endif // ENGINEER_H
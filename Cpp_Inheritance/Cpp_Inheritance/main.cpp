#include <iostream>
#include "player.h"

int main()
{
    std::string hello = "hello";
    std::string kitty = "kitty";
    Player p1("Basketball");

    std::cout << "player : " << p1 << std::endl;
    Person person1(hello, kitty);

    std::cout << "person : " << person1 << std::endl;

    return 0;
}

#include <iostream>

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};

int main()
{
    int tool{Marker};

    switch (tool)
    {
    case Pen:
    {
        std::cout << "It's a pen" << std::endl;
        break;
    }

    case Marker:
    {
        std::cout << "It's a marker" << std::endl;
        break;
    }

    case Eraser:
    {
        std::cout << "It's a eraser" << std::endl;
        break;
    }

    default:
    {
        std::cout << "Nothing" << std::endl;
    }
    }
    return 0;
}
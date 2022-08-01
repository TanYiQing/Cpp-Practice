#include <iostream>
#include <cmath>

int main()
{
    double weight{7.7};
    double savings{-5000};

    // floor
    std::cout << "Weight rounded to floor: " << std::floor(weight) << std::endl;

    // ceil
    std::cout << "Weight rounded to ceil: " << std::ceil(weight) << std::endl;

    // abs (absolute) - Cancellation of sign
    std::cout << "Weight to absolute: " << std::abs(weight) << std::endl;
    std::cout << "Savings to absolute: " << std::abs(savings) << std::endl;

    // exp - Exponential, e^x where e = 2.71828
    std::cout << "Exponential of 10: " << std::exp(10) << std::endl;

    // pow - power
    std::cout << "1 ^ 2: " << std::pow(1, 2) << std::endl;

    // sqrt
    std::cout << "The square root of 4: " << std::sqrt(4) << std::endl;

    // round
    std::cout << "The rounded of 3.164: " << std::round(3.164) << std::endl;

    return 0;
}
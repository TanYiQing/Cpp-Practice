#include <iostream>
#include <string>

void max_str(const std::string &input1, const std::string input2, std::string &output);
void max_double(double input1, double input2, double *output);

int main()
{
    std::string out_str;
    double out_doub;
    std::string string1{"Clibaba"};
    std::string string2{"Dalibaba"};
    max_str(string1, string2, out_str);
    max_double(123.1, 201.12, &out_doub);
    std::cout << "max_str: " << out_str << std::endl;
    std::cout << "max_double: " << out_doub << std::endl;

    return 0;
}

void max_str(const std::string &input1, const std::string input2, std::string &output) // Third parameter must be reference to get output from the function
{
    std::cout << "Output:" << output << std::endl;

    if (input1 > input2)
    {
        output = input1; // Store data in output parameter
    }
    else
    {
        output = input2; // Store data in output parameter
    }
}

void max_double(double input1, double input2, double *output)
{
    if (input1 > input2)
        *output = input1;
    else
        *output = input2;
}
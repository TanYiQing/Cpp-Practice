#include <iostream>
#include <iomanip>

int main()
{
    // std::endl
    std::cout << "Hello";
    std::cout << "World!";

    std::cout << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "Hello\n";
    std::cout << "World\n\n";

    // std::flush - causes immediate sending of data to the device connected to the stream

    // std::setw() - specify the width that desire to print
    std::cout << "--------------------" << std::endl;
    std::cout << "Unformatted Table: " << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "Tan Yi Qing "
              << "23" << std::endl;
    std::cout << "Ali "
              << "20" << std::endl;
    std::cout << "Ahmad "
              << "17" << std::endl;
    std::cout << std::endl;

    std::cout << std::left;     // Left Justification
    std::cout << std::right;    // Right Justification (Default)
    std::cout << std::internal; // Justified between sign and number (For number only, not string)

    std::cout << "---------------------------" << std::endl;
    std::cout << "Formatted Table with setw: " << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::setw(15) << "Tan Yi Qing "
              << std::setw(10) << "-23" << std::endl;
    std::cout << std::setw(15) << "Ali "
              << std::setw(10) << "-20" << std::endl;
    std::cout << std::setw(15) << "Ahmad "
              << std::setw(10) << "-17" << std::endl;
    std::cout << std::endl;

    // std::setfill - specify character to fill the empty field
    std::cout << std::setfill('-');
    std::cout << "---------------------------" << std::endl;
    std::cout << "Formatted Table with setfill: " << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::setw(15) << "Tan Yi Qing "
              << std::setw(10) << "-23" << std::endl;
    std::cout << std::setw(15) << "Ali "
              << std::setw(10) << "-20" << std::endl;
    std::cout << std::setw(15) << "Ahmad "
              << std::setw(10) << "-17" << std::endl;
    std::cout << std::endl;

    // std::boolalpha - print true or false instead of 1 or 0
    bool condition{true};
    std::cout << "Condition: " << condition << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Condition after formatted: " << condition << std::endl;
    std::cout << std::endl;

    // std::showpos - show the positive sign for positive number; std::noshowpos - hide the positive sign for positive number
    int positivenum{27};
    int negativenum{-12};

    std::cout << "Positive Number: " << positivenum << std::endl;
    std::cout << "Negative Number: " << negativenum << std::endl;

    std::cout << std::noshowpos; //(Default Format)
    std::cout << std::showpos;

    std::cout << "Positive Number after formatted: " << positivenum << std::endl;
    std::cout << "Negative Number after formatted: " << negativenum << std::endl;
    std::cout << std::endl;

    // std::dec; std::oct; std::hex - control the number system where the data will show in
    std::cout << std::noshowpos;
    int positive_int{991227};
    int negative_int{-991011};
    double double_var{123.50};
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Positive Integer in different base: " << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Positive Integer (dec): " << std::dec << positive_int << std::endl;
    std::cout << "Positive Integer (hex): " << std::hex << positive_int << std::endl;
    std::cout << "Positive Integer (oct): " << std::oct << positive_int << std::endl;
    std::cout << std::endl;

    std::cout << "------------------------------------" << std::endl;
    std::cout << "Negative Integer in different base: " << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Negative Integer (dec): " << std::dec << negative_int << std::endl;
    std::cout << "Negative Integer (hex): " << std::hex << negative_int << std::endl;
    std::cout << "Negative Integer (oct): " << std::oct << negative_int << std::endl;
    std::cout << std::endl;

    std::cout << "------------------------------------" << std::endl;
    std::cout << "Double Variable in different base: " << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Double Variable (dec): " << std::dec << double_var << std::endl;
    std::cout << "Double Variable (hex): " << std::hex << double_var << std::endl;
    std::cout << "Double Variable (oct): " << std::oct << double_var << std::endl;

    // std::showbase - show the base for int type
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Positive Integer in different base (no showbase): " << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Positive Integer (dec): " << std::dec << positive_int << std::endl;
    std::cout << "Positive Integer (hex): " << std::hex << positive_int << std::endl;
    std::cout << "Positive Integer (oct): " << std::oct << positive_int << std::endl;
    std::cout << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Positive Integer in different base (showbase): " << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << std::showbase;
    std::cout << "Positive Integer (dec): " << std::dec << positive_int << std::endl;
    std::cout << "Positive Integer (hex): " << std::hex << positive_int << std::endl;
    std::cout << "Positive Integer (oct): " << std::oct << positive_int << std::endl;
    std::cout << std::endl;

    // std::uppercase - making output to uppercase; std::nouppercase - making output to lower case
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Positive Integer in lower case: " << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Positive Integer (dec): " << std::dec << positive_int << std::endl;
    std::cout << "Positive Integer (hex): " << std::hex << positive_int << std::endl;
    std::cout << "Positive Integer (oct): " << std::oct << positive_int << std::endl;
    std::cout << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Positive Integer in upper case: " << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << std::uppercase;
    std::cout << "Positive Integer (dec): " << std::dec << positive_int << std::endl;
    std::cout << "Positive Integer (hex): " << std::hex << positive_int << std::endl;
    std::cout << "Positive Integer (oct): " << std::oct << positive_int << std::endl;
    std::cout << std::endl;

    // std::scientific;std::fixed - manipulate how floating point show on terminal
    double double_a{3.1421592653589793238};
    double double_b{2012.06};
    double double_c{1.34e-10};

    std::cout << "Double Value (Default): " << std::endl;
    std::cout << "a: " << double_a << std::endl;
    std::cout << "b: " << double_b << std::endl;
    std::cout << "c: " << double_c << std::endl;
    std::cout << std::endl;

    std::cout << "Double Value (Fixed): " << std::endl;
    std::cout << std::fixed;
    std::cout << "a: " << double_a << std::endl;
    std::cout << "b: " << double_b << std::endl;
    std::cout << "c: " << double_c << std::endl;
    std::cout << std::endl;

    std::cout << "Double Value (Scientific): " << std::endl;
    std::cout << std::scientific;
    std::cout << "a: " << double_a << std::endl;
    std::cout << "b: " << double_b << std::endl;
    std::cout << "c: " << double_c << std::endl;
    std::cout << std::endl;

    std::cout << "Double Value (Back to Default): " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a: " << double_a << std::endl;
    std::cout << "b: " << double_b << std::endl;
    std::cout << "c: " << double_c << std::endl;
    std::cout << std::endl;

    // std::setprecision - set the precision of a double or float;
    std::cout << "Double Value (Before set precesion): " << std::endl;
    std::cout << "a: " << double_a << std::endl;
    std::cout << std::endl;

    std::cout << "Double Value (After set precesion to 10): " << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a: " << double_a << std::endl;
    std::cout << std::endl;

    std::cout << "Double Value (After set precesion to 50): " << std::endl;
    std::cout << std::setprecision(50);
    std::cout << "a: " << double_a << std::endl;
    std::cout << std::endl;

    // std::showpoint - show the decimal place and point
    std::cout << std::setprecision(6); // Set to default
    double double_d{34.1};
    double double_e{101.99};
    double double_f{12.0};
    int int_g{45};

    std::cout << "No showpoint (Default): " << std::endl;
    std::cout << "d: " << double_d << std::endl;
    std::cout << "e: " << double_e << std::endl;
    std::cout << "f: " << double_f << std::endl;
    std::cout << "g: " << int_g << std::endl;
    std::cout << std::endl;

    std::cout << "With showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d: " << double_d << std::endl;
    std::cout << "e: " << double_e << std::endl;
    std::cout << "f: " << double_f << std::endl;
    std::cout << "g: " << int_g << std::endl;
    std::cout << std::endl;

    return 0;
}
#ifndef DOCUMENTATION_H
#define DOCUMENTATION_H

#include <iostream>
#include <iomanip>

// Documentation Formatting
inline void showDocumentation() {
    std::cout << "\n========================================================\n";
    std::cout << "        ADVANCED CALCULATOR - FUNCTION DOCUMENTATION     \n";
    std::cout << "========================================================\n";
    std::cout << std::left << std::setw(10) << "Code" << " | " << "Description" << "\n";
    std::cout << "-----------|--------------------------------------------\n";
    std::cout << std::setw(10) << "sqrt" << " | Calculates the square root (e.g., sqrt(25) = 5)\n";
    std::cout << std::setw(10) << "cbrt" << " | Calculates the cube root (e.g., cbrt(27) = 3)\n";
    std::cout << std::setw(10) << "abs"  << " | Returns the positive value (e.g., abs(-10) = 10)\n";
    std::cout << std::setw(10) << "pow"  << " | Raises a base to an exponent (e.g., pow(2,3) = 8)\n";
    std::cout << std::setw(10) << "round"<< " | Rounds to the nearest integer (e.g., 3.6 = 4)\n";
    std::cout << std::setw(10) << "hypot"<< " | Finds the hypotenuse of a triangle (sqrt(x*x + y*y))\n";
    std::cout << "========================================================\n";
}

#endif
/*
Create a program that calculates the roots of a quadratic polynomial using the quadratic formula.
*/

#include <iostream>
#include <cmath>

int main() {

    /*
    Below variables from the quadratic formula.
    */
    double a;
    double b;
    double c;

    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;
    std::cout << "Enter the value of c: ";
    std::cin >> c;

    double root1 = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    double root2 = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);

    std::cout << "The quadratic curve passes through " << root1 << " and " << root2 << ".\n"; 
}
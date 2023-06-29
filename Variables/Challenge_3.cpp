/*
Create a program that asks for a distance in miles and converts it into kilometers.
*/

#include <iostream>

int main() {

    double miles;
    double kilometers;

    std::cout << "Enter the distance to be converted (in miles): ";
    std::cin >> miles;

    kilometers = (miles * 1.60934);

    std::cout << "The distance you have entered equates to approximately " << kilometers << " kilometers.\n";
}
/*
Create a program that can take in a temperature in Fahrenheit and convert it into Celsius.
*/

#include <iostream>

int main() {

    double temperature_fahrenheit;
    double temperature_celsius;

    std::cout << "Enter the temperature in degrees Fahrenheit: ";
    std::cin >> temperature_fahrenheit;
    //std::cout << "\n";

    temperature_celsius = (temperature_fahrenheit - 32) / 1.8;

    std::cout << "The temperature in Celsius is " << temperature_celsius << " degrees Celsius.\n";
}
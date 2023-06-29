/*
Create a program that takes in the weight of an item and calculates its weight on Mars.
*/

#include <iostream>

int main() {

    double weight_earth;
    double weight_mars;

    std::cout << "Enter the weight of the item on Earth (in kilograms): ";
    std::cin >> weight_earth;

    weight_mars = weight_earth * 0.3;

    std::cout << "The weight of the item on Mars is approximately " << weight_mars << " kilograms.\n";

}
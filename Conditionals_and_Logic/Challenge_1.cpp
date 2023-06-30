/*
Create a program that asks for the weight of an object on Earth and asks for a planet to compare this weight to.
*/

#include <iostream>

int main() {

    double earth_weight = 0;
    int selection = 0;
    double mercury_weight = 0.38;
    double venus_weight = 0.91;
    double mars_weight = 0.38;
    double jupiter_weight = 2.34;
    double saturn_weight = 1.06;
    double uranus_weight = 0.92;
    double neptune_weight = 1.19;

    std::cout << "Enter the weight of the item on Earth (in kilograms): ";
    std::cin >> earth_weight;

    std::cout << "Mercury = 1\n";
    std::cout << "Venus = 2\n";
    std::cout << "Mars = 3\n";
    std::cout << "Jupiter = 4\n";
    std::cout << "Saturn = 5\n";
    std::cout << "Uranus = 6\n";
    std::cout << "Neptune = 7\n";
    std::cout << "Enter the number corresponding to the planet the item will be moving to: ";
    std::cin >> selection;

    if (earth_weight <= 0) {
        std::cout << "Invalid weight. Enter weight (in kilograms) again: ";
        std::cin >> earth_weight;
    }

    if (selection <= 0) {
        std::cout << "Invalid planet selection. Enter a number from the list of options: ";
        std::cin >> selection;
    }

    switch (selection) {
        case 1:
            std::cout << "The weight of the item on Mercury is " << earth_weight * mercury_weight << " kilograms\n";
            break;
        case 2:
            std::cout << "The weight of the item on Venus is " << earth_weight * venus_weight << " kilograms\n";
            break;
        case 3:
            std::cout << "The weight of the item on Mars is " << earth_weight * mars_weight << " kilograms\n";
            break;
        case 4:
            std::cout << "The weight of the item on Jupiter is " << earth_weight * jupiter_weight << " kilograms\n";
            break;
        case 5:
            std::cout << "The weight of the item on Saturn is " << earth_weight * saturn_weight << " kilograms\n";
            break;
        case 6:
            std::cout << "The weight of the item on Uranus is " << earth_weight * uranus_weight << " kilograms\n";
            break;
        case 7:
            std::cout << "The weight of the item on Neptune is " << earth_weight * neptune_weight << " kilograms\n";
            break;
        default:
            std::cout << "Encountered an error in processing data. Restart program to try again.";
            break;
    }
}
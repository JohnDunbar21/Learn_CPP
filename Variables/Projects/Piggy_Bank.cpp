/*
Create a program that takes user input for each currency from a list and display the total amount converted to USD.
*/

#include <iostream>

int main() {

    double pesos;
    double reais;
    double soles;

    double dollars;

    std::cout << "Enter the amount of Columbian Pesos to convert: ";
    std::cin >> pesos;
    std::cout << "Enter the amount of Brazilian Reais to convert: ";
    std::cin >> reais;
    std::cout << "Enter the amount of Peruvian Soles to convert: ";
    std::cin >> soles;

    // Approximate conversion rates for each currency.
    double pesos_rate = 0.00032;
    double reais_rate = 0.27;
    double soles_rate = 0.3;

    dollars = (pesos_rate * pesos) + (reais_rate * reais) + (soles_rate * soles);

    std::cout << "The total amount of money you have converted is equal to " << dollars << " USD.\n";
}
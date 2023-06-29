/*
Create a program that calculates the age of a dog in human years for any dog older than two years old.
*/

#include <iostream>

int main() {

    int dog_age = 8; // Assigning a random age for a dog greater than 2.
    int early_years = 21; // The first two years of a dog's life count as 21 human years.
    int later_years = (dog_age - 2) * 4; // Each following year counts as 4 human years.
    int human_years = early_years + later_years;

    std::cout << "Even though the dog is " << dog_age << " years old, they are " << human_years << " years old in human years!\n";


}
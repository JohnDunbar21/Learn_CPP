/*
Create a program that can determine if a year given by the user is a leap year or not.
*/

#include <iostream>

int main() {
    
    int year;

    std::cout << "Enter a year to check: ";
    std::cin >> year;

    if (year < 1000 || year > 9999) {
        std::cout << "Invalid year entered. Restart program to try again.";
    }

    if (year % 4 == 0 &&  year % 100 != 0 || year % 400 == 0) {
        std::cout << year << " is a leap year\n";
    }
    else {
        std::cout << year << " is not a leap year\n";
    }
}
/*
Write a program that provides a person's last name, followed by their full name.
*/
#include <iostream>

void introduction(std::string first_name, std::string last_name) {
    std::cout << last_name << ", " << first_name << " " << last_name << "\n";
}

int main() {
    introduction("James", "Bond");
}
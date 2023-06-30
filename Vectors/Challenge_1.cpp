/*
Create a program that calculates the sum of the odd and even numbers up to a user-provided limit using vectors.
*/

#include <iostream>
#include <vector>

int main() {

    int user_limit;

    std::cout << "Enter the size of the list to calculate: ";
    std::cin >> user_limit;

    std::vector<int> odd;
    std::vector<int> even;

    int odd_total = 0;
    int even_total = 0;

    for (int i = 1; i <= user_limit; i++) {
        if (i % 2 == 0) {
            even.push_back(i);
        }
        else {
            odd.push_back(i);
        }
    }

    std::cout << "The number of even elements is " << even.size() << ".\n";
    std::cout << "The number of odd elements is " << odd.size() << ".\n";

    for (int i = 0; i < even.size(); i++) {
        even_total += even[i];
    }

    for (int i = 0; i < odd.size(); i++) {
        odd_total += odd[i];
    }

    std::cout << "The sum of the even elements is " << even_total << ".\n";
    std::cout << "The sum of the odd elements is " << odd_total << ".\n";
}
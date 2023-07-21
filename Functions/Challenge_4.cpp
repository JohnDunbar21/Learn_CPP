/*
Write a program that takes a number and finds its first three multiples.
*/
#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
    std::vector<int> numbers;

    for (int i = 1; i <= 3; i++) {
        numbers.push_back(num * i);
    }

    return numbers;
}

int main() {
  
    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";
    }
  
}
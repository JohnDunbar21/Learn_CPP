/*
Create a program that outputs the numbers from 1 to 100, but multiples of 3 are "Fizz", for multiples of 5 are "Buzz", and for multiples of both "FizzBuzz".
*/

#include <iostream>

int main() {

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0) {
            std::cout << "Fizz\n";
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz\n";
        }
        else {
            std::cout << i << "\n";
        }
        
    }
}
/*
Write a program that finds the average between two numbers.
*/
#include <iostream>

double average(double num1, double num2) {
    return (num1 + num2) / 2;
}

int main() {
  
    std::cout << average(42.0, 24.0) << "\n";
    std::cout << average(1.0, 2.0) << "\n";
  
}
/*
Create a program that allows a use to play against the computer in a game of Rock, Paper, Scissors.
*/

#include <iostream>
#include <stdlib.h>

int main() {

    srand(time(NULL));

    int computer_choice = rand() % 3 + 1;
    int user_choice = 0;

    std::cout << "-=-=-=-=-=-=-=-=-=-=-=\n";
    std::cout << "ROCK, PAPER, SCISSORS!\n";
    std::cout << "-=-=-=-=-=-=-=-=-=-=-=\n\n";
    std::cout << "    1) Rock\n";
    std::cout << "    2) Paper\n";
    std::cout << "    3) Scissors\n\n";
    std::cout << "SHOOT!\n";
    std::cin >> user_choice;

    if (computer_choice == 1 && user_choice == 2) {
        std::cout << "You win!";
    }
    else if (computer_choice == 1 && user_choice == 1) {
        std::cout << "It's a draw!";
    }
    else if (computer_choice == 1 && user_choice == 3) {
        std::cout << "You lose!";
    }
    else if (computer_choice == 2 && user_choice == 3) {
        std::cout << "You win!";
    }
    else if (computer_choice == 2 && user_choice == 2) {
        std::cout << "It's a draw!";
    }
    else if (computer_choice == 2 && user_choice == 1) {
        std::cout << "You lose!";
    }
    else if (computer_choice == 3 && user_choice == 1) {
        std::cout << "You win!";
    }
    else if (computer_choice == 3 && user_choice == 3) {
        std::cout << "It's a draw!";
    }
    else if (computer_choice == 3 && user_choice == 2) {
        std::cout << "You lose!";
    }
}
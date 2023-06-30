/*
Create a program that asks the user some questions and places them into one of the four Hogwarts houses based on their answers.
*/

#include <iostream>

int main() {

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1;
    int answer2;
    int answer3;
    int answer4;

    std::cout << "The Sorting Hat Quiz!\n\n";

    std::cout << "Q1) When I am dead, I want people to remember me as:\n\n";
    std::cout << "    1) The Good\n";
    std::cout << "    2) The Great\n";
    std::cout << "    3) The Wise\n";
    std::cout << "    4) The Bold\n\n";
    std::cin >> answer1;

    switch (answer1) {
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            std::cout << "Invalid input. Restart program to start again.";
            break;
    }

    std::cout << "Q2) Dawn or Dusk?\n\n";
    std::cout << "    1) Dawn\n";
    std::cout << "    2) Dusk\n\n";
    std::cin >> answer2;

    switch (answer2) {
        case 1:
            gryffindor++;
            ravenclaw++;
            break;
        case 2:
            hufflepuff++;
            slytherin++;
            break;
        default:
            std::cout << "Invalid input. Restart program to start again.";
            break;
    }

    std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
    std::cout << "    1) The violin\n";
    std::cout << "    2) The trumpet\n";
    std::cout << "    3) The piano\n";
    std::cout << "    4) The drum\n\n";
    std::cin >> answer3;

    switch (answer3) {
        case 1:
            slytherin++;
            break;
        case 2:
            hufflepuff++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            std::cout << "Invalid input. Restart program to start again.";
            break;
    }

    std::cout << "Q4) Which road tempts you the most?\n\n";
    std::cout << "    1) The wide, sunny grassy lane\n";
    std::cout << "    2) The narrow, dark, lantern-lit alley\n";
    std::cout << "    3) The twisting, leaf-strewn path through the woods\n";
    std::cout << "    4) The cobbled street lined (ancient buildings)\n\n";
    std::cin >> answer4;

    switch (answer4) {
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            gryffindor++;
            break;
        case 4:
            ravenclaw++;
            break;
        default:
            std::cout << "Invalid input. Restart program to start again.";
            break;
    }

    int score = 0;
    std::string house;

    if (gryffindor > score) {
        score = gryffindor;
        house = "Gryffindor";
    }
    if (hufflepuff > score) {
        score = hufflepuff;
        house = "Hufflepuff";
    }
    if (ravenclaw > score) {
        score = ravenclaw;
        house = "Ravenclaw";
    }
    if (slytherin > score) {
        score = slytherin;
        house = "Slytherin";
    }

    std::cout << "Your house is... " << house << "!\n";

}
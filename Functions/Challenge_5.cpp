/*
Write a program that checks if a person needs to water the plants based on how many days it has been since they last watered it.
*/
#include <iostream>

std::string needs_water(int days, bool is_succulent) {
    if (days > 3 && !is_succulent) {
        return "Time to water the plant.";
    }
    else if (days < 13 && is_succulent) {
        return "Don't water the plant!";
    }
    else if (days >= 13 && is_succulent) {
        return "Go ahead and give the plant a little water.";
    }
    else {
        return "Don't water the plant!";
    }
  
}

int main() {
    std::cout << needs_water(2, false) << "\n";
}
/*
Create a program that takes a string and removes all consonants except the letter 'y' and doubles the length of 'u' and 'e' letters.
*/

#include <iostream>
#include <vector>
#include <string>

int main() {

    std::string user_string;
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    std::string translation;

    std::cout << "Enter a string to be translated into Whale Talk: ";
    std::getline(std::cin, user_string);

    for (int i = 0; i < user_string.size(); i++) {
        for (int j = 0; j < vowels.size(); j++) {
            if (user_string[i] == vowels[j]) {
                translation.push_back(user_string[i]);
                if (user_string[i] == 'u' || user_string[i] == 'U' || user_string[i] == 'e' || user_string[i] == 'E') {
                    translation.push_back(user_string[i]);
                }
            }
        }
    }
  
    std::cout << "The translation is: " << translation << "\n";
}
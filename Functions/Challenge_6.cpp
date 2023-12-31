/*
Write a program that detects a palindromic string.
*/
#include <iostream>

bool is_palindrome(std::string text) {
    std::string reversed_text = "";
    for (int i = text.size() - 1; i >= 0; i--) {
        reversed_text += text[i];
    }
    if (text == reversed_text) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
  
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
  
}
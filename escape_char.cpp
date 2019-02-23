/*
  escape_char.cpp
  Escape characters are useful for formatting your code.
  \n - newline, \t - horz. tab, \v - vert tab, \b - backspace, \r - carriage return, \a - alarm (must be hardware enabled)
  \' and \" escapes the quotation mark. \? escapes the question mark.
*/

#include<iostream>

int main() {
    int code;
    
    std::cout << "\tAI AUTHENTICATOR";
    std::cout << "\n\aEnter Code:________\b\b\b\b\b\b\b\b";
    std::cin >> code;
    std::cout << "\n\nCode " << code << " is INCORRECT!!!!";
    std::cout << "\n\nYour curiosity will mean the end for you, begone human!";
    std::cout << "\nSSSSSSKKKKKKKKRRRRRRRRREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
}

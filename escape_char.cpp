/*
  escape_char.cpp
  Escape characters are useful for formatting your code.
  \n - newline, \t - horz. tab, \v - vert tab, \b - backspace, \r - carriage return, \a - alarm (must be hardware enabled)
  \' and \" escapes the quotation mark. \? escapes the question mark.
*/

#include<iostream>

int main() {
    using namespace std;
    
    int code;
    
    cout << "\tAI AUTHENTICATOR";
    cout << "\n\aEnter Code:________\b\b\b\b\b\b\b\b";
    cin >> code;
    cout << "\n\nCode " << code << " is INCORRECT!!!!";
    cout << "\n\nYour curiosity will mean the end for you, begone human!";
    cout << "\nSSSSSSKKKKKKKKRRRRRRRRREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
}

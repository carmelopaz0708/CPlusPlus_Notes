/*
  A program that allows the any user to input a decimal number and convert it to octal and hexadecimal.
*/

#include <iostream>

int main() {
    int dec, oct;
    
    std::cout << "Enter Decimal Number: ";
    std::cin >> dec;
    
    std::cout << "\nOct: " << std::oct << dec;
    std::cout << "\nHex: " << std::hex << dec;
}

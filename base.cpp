/*
  base.cpp
  A program that displays other base-N number systems used in computers. Base-N number systems can be display by using the designated syntax.
*/

#include <iostream>

int main() {
  int num_dec = 21;                 // Decimal numbers have their first digit from 1 - 9
  int num_oct = 021;                // Octal numbers are represented by a zero on the first digit
  int num_hex = 0x21;               // Hexadecimal characters are initialized with a 0x or 0X
                                    // Hex characters can be followed with a-f or A-F
  
  // Initialization, computer auto converts variable to decimal
  std::cout << "dec: " << num_dec << "\n";         // Will display the decimal number as decimal
  std::cout << "oct: " << num_oct << "\n";         // Will display the octal number as a converted decimal number
  std::cout << "hex: " << num_hex << "\n\n";       // Will display the hexadecimal number as a converted decimal number
  
  // To convert to base-N, use conversion syntax:
  std::cout << "dec: " << std::dec << num_dec << "\n";  // Converts num_dec to decimal (unnecessary since num_dec is already a decimal value)
  std::cout << "oct: " << std::oct << num_oct << "\n";  // Converts num_oct to octal
  std::cout << "hex: " << std::hex << num_hex << "\n";  // Converts num_hex to hexadecimal
}

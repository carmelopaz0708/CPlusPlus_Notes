/*
  BASE NUMBER SYSTEM
  Using the standard library, C++ is capable of generating the four most common base-N notations. These are the decimal (base 10), binary (base 2), octal (base 8) and hexadecimal
  (base 16) notations. Built-in numeral converters are present in the standard library. The sample code below shows how to initialize special base-N numbers such as binary, octal
  and hexadecimal as well as to use the base-N number converters.

@auth siege
@init 03/07/19
*/

#include <iostream>

int main() {
  int num_dec = 21;                 // Decimal numbers are written as normal numbers
  int num_oct = 021;                // Octal numbers are represented by a zero on the first digit
  int num_hex = 0x21;               // Hexadecimal characters are initialized with a 0x or 0X and use either a-f or A-F

  // Initialization, computer auto converts variable to decimal
  std::cout << "dec: " << num_dec << "\n";         // Will display the decimal number as decimal
  std::cout << "oct: " << num_oct << "\n";         // Will display the octal number as a converted decimal number
  std::cout << "hex: " << num_hex << "\n\n";       // Will display the hexadecimal number as a converted decimal number

  // To convert to base-N, use conversion syntax:
  std::cout << "dec: " << std::dec << num_dec << "\n";  // Converts num_dec to decimal (unnecessary since num_dec is already a decimal value)
  std::cout << "oct: " << std::oct << num_oct << "\n";  // Converts num_oct to octal
  std::cout << "hex: " << std::hex << num_hex << "\n";  // Converts num_hex to hexadecimal
}


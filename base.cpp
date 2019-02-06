/*
  base.cpp
  A program that displays other base-N number systems used in computers. Base-N number systems can be display by using the designated syntax.
*/

#include <iostream>

using namespace std;

int main() {
  int num_dec = 21;                 // Decimal numbers have their first digit from 1 - 9
  int num_oct = 021;                // Octal numbers are represented by a zero on the first digit
  int num_hex = 0x21;               // Hexadecimal characters are initialized with a 0x or 0X
                                    // Hex characters can be followed with a-f or A-F
  
  // Initialization, computer auto converts variable to decimal
  cout << "dec: " << num_dec << endl;         // Will display the decimal number as decimal
  cout << "oct: " << num_oct << endl;         // Will display the octal number as a converted decimal number
  cout << "hex: " << num_hex << endl;         // Will display the hexadecimal number as a converted decimal number
  cout << endl;
  
  // To convert to base-N, use conversion syntax:
  cout << "dec: " << dec << num_dec << endl;  // Converts num_dec to decimal (unnecessary since num_dec is already a decimal value)
  cout << "oct: " << oct << num_oct << endl;  // Converts num_oct to octal
  cout << "hex: " << hex << num_hex << endl;  // Converts num_hex to hexadecimal
}

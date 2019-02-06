/*
  base.cpp
  A program that displays other base-N number systems used in computers. Base-N number systems can be display by using the designated syntax.
*/

#include <iostream>

using namespace std;

int main() {
  int dec = 21;                 // Decimal numbers have their first digit from 1 - 9
  int oct = 021;                // Octal numbers are represented by a zero on the first digit
  int hex = 0x21;               // Hexadecimal characters are initialized with a 0x or 0X
                                // Hex characters can be followed with a-f or A-F
  
  cout << "The number is " << dec << endl;              // Will display the decimal number as decimal
  cout << "The next number is " << oct << endl;         // Will display the octal number as a converted decimal number
  cout << "The last number is " << hex << endl;         // Will display the hexadecimal number as a converted decimal number
  cout << "END" << endl;
}

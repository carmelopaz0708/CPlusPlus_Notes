/*
  CFLOAT
  The cfloat header file describes the characteristics of floating types for the specific system and compiler implementation used. Note that the values here will may not 
always be the same for some other system used to compile this program. You can compile this program to check the properties of floating point numbers present in your
system. Floating point types are given by the equation, val = sgf x rad^exp wherein val is the value of the floating point number, sgf is the number of significant figures, 
rad is the radix and exp is the exponent. More information on cfloat and header files are available in https://www.cplusplus.com/reference/ 
  
@auth siege
@init 03/22/19
*/

void float_rep_func();
void epsilon_func();

#include <iostream>
#include <cfloat>

int main() {
  std::cout << "\n-----------------------------------------------------------------------------";
  float_rep_func();
  epsilon_func();
}

void float_rep_func() {
  // Maximum finite representable floating-point number
  std::cout << "\n\tMAXIMUM DIGIT REPRESENTATION FOR FLOATING POINT NUMBERS";
  std::cout << "\n-----------------------------------------------------------------------------";
  std::cout << "\nFloat: " << FLT_MAX;
  std::cout << "\nDouble: " << DBL_MAX;
  std::cout << "\nLong Double: " << LDBL_MAX;
  std::cout << "\n-----------------------------------------------------------------------------";
  std::cout << "\n\tMINIMUM DIGIT REPRESENTATION FOR FLOATING POINT NUMBERS";
  std::cout << "\n-----------------------------------------------------------------------------";
  std::cout << "\nFloat: " << FLT_MIN;
  std::cout << "\nDouble: " << DBL_MIN;
  std::cout << "\nLong Double: " << LDBL_MIN;
  std::cout << "\n-----------------------------------------------------------------------------";
}

void epsilon_func() {
  // Difference between 1 and the least value greater than 1 that is representable
  std::cout << "\n\tEPSILON REPRESENTATION";
  std::cout << "\nFloat: " << FLT_EPSILON;
  std::cout << "\nDouble: " << DBL_EPSILON;
  std::cout << "\nLong Double: " << LDBL_EPSILON;
  std::cout << "\n-----------------------------------------------------------------------------";
}

/*
  POINTERS
  Always indicate the pointer to a reference address before using it.

  @TODO pointers introduction

  @auth siege
  @rev 06/12/19
*/

#include<iostream>

int main() {
  int my_value = 320;
  int* p_my_value = &my_value;

  std::cout << "\nValue via variable: " << my_value;
  std::cout << "\nValue via pointer: " << *p_my_value << "\n";    // Pointer points to int variable my_value

  std::cout << "\nAddress via &: " << &my_value;
  std::cout << "\nAddress via pointer: " << p_my_value << "\n";   // Pointer points to address of variable my_value
}

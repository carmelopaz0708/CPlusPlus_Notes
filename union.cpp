/*
  UNION
  Unions bear close resemblance to structures in terms of syntax but are inherently different. Unlike structures, which can hold multiple variables of different data 
types, unions can only hold ONE data type at a time. Variables inside the union share the same memory, thus the object's current value is overwritten everytime a new 
value is written. To use a union, initialize an object that the union will be referred to, after which append the constructor everytime you wish to use the variables 
inside the union. A union's memory will consists of the largest variable initialized in it. Unions are versatile data types and are especially useful in embedded 
systems where memory is a priority. 

  @auth siege
  @rev 06/12/19
*/

#include<iostream>

union randomAssign {
  int input_whole_num;
  double input_decimal_num;
  char input_string[30];
};

int main() {
  int max_string_size = 30;
  randomAssign volatile_var;

  std::cout << "\nEnter text to the console: ";
  std::cin.getline(volatile_var.input_string, max_string_size);
  std::cout << "Current Val: "<< volatile_var.input_string;

  std::cout << "\nEnter a whole number: ";
  std::cin >> volatile_var.input_whole_num;
  std::cout << "Stored Number: " << volatile_var.input_whole_num;

  std::cout << "\nEnter a decimal number: ";
  std::cin >> volatile_var.input_decimal_num;
  std::cout << "Stored Decimal: " << volatile_var.input_decimal_num << "\n";
}

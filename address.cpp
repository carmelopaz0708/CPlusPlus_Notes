/*
  ADDRESS
  The '&' operator when affixed to the beginning of the variable displays the variable's memory address.

  @auth siege
  @rev 06/12/19
*/

#include<iostream>

int main() {
  int str_max_limit = 30;
  char input_str[str_max_limit];
  double input_num;

  std::cout << "\nEnter a string: ";
  std::cin.getline(input_str, str_max_limit);
  std::cout << "String Value: " << input_str;
  std::cout << "\nString Address: " << &input_str;

  std::cout << "\n\nEnter a number: ";
  std::cin >> input_num;
  std::cout << "Decimal Value: " << input_num;
  std::cout << "\nDecimal Address: " << &input_num << "\n";
}

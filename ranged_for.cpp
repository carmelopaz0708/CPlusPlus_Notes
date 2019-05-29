/*
  RANGED FOR LOOP
  The ranged for loop is a variation of the for loop used exclusively for ranges. It follows the syntax 'for (declaration : range) {statements}'. Declaration declares a
variable able to take a value in the range. Ranges are sequences of elements like arrays, containers, etc (anything that makes use of 'begin' and 'end'). Ranged for loops also
make use of another type called the 'auto'. 'auto' automatically deduces the data type in a declaration.

@auth siege
@rev 05/29/19
*/

#include <iostream>

int main() {
  char input_name[15];
  const int name_length = 15;

  std::cout << "Enter a name: ";
  std::cin.getline(input_name, name_length);
  
  // Ranged for statement. 
  for (auto c : input_name) {
    if (c == ' ') {
      continue;
    }
    std::cout << "[ " << c << " ],";
  }
}

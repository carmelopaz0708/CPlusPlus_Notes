/*
 INTEGER OVERFLOW
 An integer overflow occurs when an arithmetic operation tries to create a numeric value exceeding the range of the initialized variable - either higher than the maximum 
or lower than the minimum representable value. Overflow causes unintended program behavior and in some cases, jeopardizes the integrity of the program. Such an event can be
avoided by initializing the right primitive values to variables used in the program. The coder should also ensure that arithmetic values stay within the boundaries of their
maximum and minimum values and that no operation inside the program should exceed the set range.
 The following program displays the effects of integer overflow by exceeding the maximum or minimum value by one.
  
@init siege
@rev 03/20/19
*/

void short_overflow_function(short);

#include <iostream>
#include <climits>

int main() {
  short input_overflow_value;
  std::cout << "Enter a value: ";
  std::cin >> input_overflow_value;
  short_overflow_function(input_overflow_value);
}

void short_overflow_function(short short_overflow_value) {
  short exceed_max_value, exceed_min_value;
  std::cout << "---------------------------------------------\n";
  std::cout << "Current minimum short value: " << SHRT_MIN << "\n";
  std::cout << "Current maximum short value: " << SHRT_MAX << "\n";
  std::cout << "---------------------------------------------\n";
  exceed_min_value = SHRT_MIN - short_overflow_value;
  exceed_max_value = SHRT_MAX + short_overflow_value;
  std::cout << "Exceed minimum: "<< SHRT_MIN << " - " << short_overflow_value << " = " << exceed_min_value << "\n";
  std::cout << "Exceed maximum: "<< SHRT_MAX << " + " << short_overflow_value << " = " << exceed_max_value << "\n";
}

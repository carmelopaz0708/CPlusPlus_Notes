/*
INTEGER OVERFLOW
  An integer overflow occurs when an arithmetic operation tries to create a numeric value exceeding the range of the initialized variable - either higher than the maximum 
or lower than the minimum representable value. Overflow causes unintended program behavior and in some cases, jeopardizes the integrity of the program. Such an event can be
avoided by initializing the right primitive values to variables used in the program. The coder should also ensure that arithmetic values stay within the boundaries of their
maximum and minimum values and that no operation inside the program should exceed the set range.
  The following program displays the effects of integer overflow by exceeding the maximum or minimum value by a given value. Note that the program results are incorrect as
a result of overflow.
  
@init siege
@rev 03/20/19
*/

#include <iostream>
#include <climits>

void short_overflow_function(short);
void int_overflow_function(int);
void long_overflow_function(long);
void ushort_overflow_function(short);

int main() {
  long long input_overflow_value;
  std::cout << "Enter a value: ____\b\b\b\b";
  std::cin >> input_overflow_value;
  
  // Input value will be typecasted to its respective function
  short_overflow_function(input_overflow_value);
  int_overflow_function(input_overflow_value);
  long_overflow_function(input_overflow_value);
  ushort_overflow_function(input_overflow_value);
}

void short_overflow_function(short short_overflow_value) {
  short exceed_max_value, exceed_min_value;
  std::cout << "\n---------------------------------------------\n";
  std::cout << "\t\tSHORT\n";
  std::cout << "---------------------------------------------\n";
  std::cout << "Minimum short value: " << SHRT_MIN << "\n";
  std::cout << "Maximum short value: " << SHRT_MAX << "\n\n";
  exceed_min_value = SHRT_MIN - short_overflow_value;
  exceed_max_value = SHRT_MAX + short_overflow_value;
  std::cout << "Exceed minimum: "<< SHRT_MIN << " - " << short_overflow_value << " = " << exceed_min_value << "\n";
  std::cout << "Exceed maximum: "<< SHRT_MAX << " + " << short_overflow_value << " = " << exceed_max_value << "\n";
  std::cout << "---------------------------------------------\n";
}

void int_overflow_function(int int_overflow_value) {
  int exceed_max_value, exceed_min_value;
  std::cout << "\n---------------------------------------------\n";
  std::cout << "\t\tINT\n";
  std::cout << "---------------------------------------------\n";
  std::cout << "Minimum int value: " << INT_MIN << "\n";
  std::cout << "Maximum int value: " << INT_MAX << "\n\n";
  exceed_min_value = INT_MIN - int_overflow_value;
  exceed_max_value = INT_MAX + int_overflow_value;
  std::cout << "Exceed minimum: "<< INT_MIN << " - " << int_overflow_value << " = " << exceed_min_value << "\n";
  std::cout << "Exceed maximum: "<< INT_MAX << " + " << int_overflow_value << " = " << exceed_max_value << "\n";
  std::cout << "---------------------------------------------\n";
}

void long_overflow_function(long long_overflow_value) {
  long exceed_max_value, exceed_min_value;
  std::cout << "\n---------------------------------------------\n";
  std::cout << "\t\tLONG\n";
  std::cout << "---------------------------------------------\n";
  std::cout << "Minimum long value: " << LONG_MIN << "\n";
  std::cout << "Maximum long value: " << LONG_MAX << "\n\n";
  exceed_min_value = LONG_MIN - long_overflow_value;
  exceed_max_value = LONG_MAX + long_overflow_value;
  std::cout << "Exceed minimum: "<< LONG_MIN << " - " << long_overflow_value << " = " << exceed_min_value << "\n";
  std::cout << "Exceed maximum: "<< LONG_MAX << " + " << long_overflow_value << " = " << exceed_max_value << "\n";
  std::cout << "---------------------------------------------\n";
}

void ushort_overflow_function(short ushort_overflow_value) {
  unsigned short exceed_max_value, exceed_zero;
  unsigned short ushrt_zero = 0;
  std::cout << "\n---------------------------------------------\n";
  std::cout << "\t\tUNSIGNED SHORT\n";
  std::cout << "---------------------------------------------\n";
  std::cout << "Minimum ushort value: " << ushrt_zero << "\n";
  std::cout << "Maximum ushort value: " << USHRT_MAX << "\n\n";
  exceed_zero = ushrt_zero - ushort_overflow_value;
  exceed_max_value = USHRT_MAX + ushort_overflow_value;
  std::cout << "Exceed zero: "<< ushrt_zero << " - " << ushort_overflow_value << " = " << exceed_zero << "\n";
  std::cout << "Exceed maximum: "<< USHRT_MAX << " + " << ushort_overflow_value << " = " << exceed_max_value << "\n";
  std::cout << "---------------------------------------------\n";
}

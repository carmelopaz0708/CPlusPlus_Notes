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

#include <iostream>
#include <climits>

int main() {
  int overflow_value = 1;
}
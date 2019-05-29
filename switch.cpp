/*
  SWITCH STATEMENT
  Switch statements act like a an ordinary if-else statement but optimized for use with constant expressions. Switch checks the variable with each constant expression (the
constant expression attached with every case) for a match. If a match is made, the lines of code written under that case is conducted. When no case is satisfied, the switch
statement is skipped. A default case can be written under a switch case statement which runs when no other case is met. Note that switch cases are purely for constant
integer expressions. Case statements must contain one integer only. No logical expressions, comparison operators and non integer types should be attached to the case
statement. It is best practice to write a switch case statement inside its own function.
  
@auth siege
@rev 05/29/19
*/

#include <iostream>

void praiseSelector(int my_combo);

int main() {
  int input_combo_score;
  std::cout << "Enter your combo score(1 - 15): ";
  std::cin >> input_combo_score;
  praiseSelector(input_combo_score);
}

void praiseSelector(int my_combo) {
  std::cout << "You entered " << my_combo << "!\n";
  switch (my_combo) {
    case 1:
      std::cout << "Mashing a single button.";
      break;
    case 2:
      std::cout << "Punch kick combo.";
      break;
    case 5:
      std::cout << "Basic aerial.";
      break;
    case 9:
      std::cout << "Juggling, a little hard to do.";
      break;
    case 13:
      std::cout << "Okizemi on point!";
      break;
    case 15:
      std::cout << "MAX COMBO WHAT A CRAZY MIX!";
      break;
    default:
      std::cout << "Sorry! Didn't catch that.";
      break;
  }
}

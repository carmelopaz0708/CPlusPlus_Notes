/*
  FUNCTION AND FUNCTION CALL
  Functions are a very useful method of grouping complicated lines of code together. Suppose a program has several thousand lines of code, reading the program from top to
bottom would be difficult. Luckily for us, we can use a function to group together lines of codes that perform a specific function. This is to isolate code from one area to
another and prevent generating bugs which are difficult to trace. By partitioning code into functions, our program becomes easily readable by fellow programmers reading and
debugging your code. Functions also isolate variables from other parts of the code, allowing you to reuse variable names. A variable initialized inside a function will only
exist inside that function.
C++, Java and C programming make use of a special function called main(). 'main()' pertains to your home function; it is where the function starts. Other programming
languages such as Python does not make use of main(). When the program is run, the main function is called first. For other functions, we require a function prototype.
A function prototype is a header file placed on top of the program that declares the name as a function. They follow the syntax 'type name(args)' where type refers to its
data type (int, double, void, etc.), name is the name of the function and args as the input arguments to the function. You must declare all input arguments in the functions
prototype to avoid generating an error. Once the function prototype has been declared, you can generate your function inside of the program.
Generating a function follows the same syntax as a function header but only this time you can declare names for your input arguments. To obtain a value from a function,
use a return statement. The return statement takes the output of a particular function, enabling it to be used by other functions.
Function call means to allow the function to execute its lines of code. This can be done by simply calling the name of the function (and assigning its input arguments if (
(neccesary) or assigning a variable to a function call (as shown below).

@auth siege
@init 03/06/19
*/

#include <iostream>

double adder_func(double, double);              // Function prototype. You can add names to the input argument but its not really neccesary
double difference_func(double, double);         // The names will act as placeholders. They don't need to match the the function args
double multiplier_func(double, double);
double divider_func(double, double);
void display_func(double, double, double, double);

int main() {
  double input_val1, input_val2, output_sum_func, output_dif_func, output_prod_func, output_quo_func;
  std::cout << "Enter val1: ";
  std::cin >> input_val1;
  std::cout << "Enter val2: ";
  std::cin >> input_val2;
  output_sum_func = adder_func(input_val1, input_val2);
  output_dif_func = difference_func(input_val1, input_val2);
  output_prod_func = multiplier_func(input_val1, input_val2);
  output_quo_func = divider_func(input_val1, input_val2);
  display_func(output_sum_func, output_dif_func, output_prod_func, output_quo_func);
}

double adder_func(double addend1, double addend2) {
  double summer_result;
  summer_result = addend1 + addend2;
  return summer_result;
}

double difference_func(double minuend, double subtrahend) {
  double difference_result;
  difference_result = minuend - subtrahend;
  return difference_result;
}

double multiplier_func(double multiplicand, double multiplier) {
  double multiplier_result;
  multiplier_result = multiplicand * multiplier;
  return multiplier_result;
}

double divider_func(double dividend, double divisor) {
  double divider_result;
  divider_result = dividend / divisor;
  return divider_result;
}

void display_func(double display_output_adder, double display_output_difference, double display_output_multiplier, double display_output_divider) {
  std::cout << "----------------------------------------------------------\n";
  std::cout << "val1 + val2 = " << display_output_adder << "\n";
  std::cout << "val1 - val2 = " << display_output_difference << "\n";
  std::cout << "val1 * val2 = " << display_output_multiplier << "\n";
  std::cout << "val1 / val2 = " << display_output_divider << "\n";
  std::cout << "                 END TRANSMISSION" << "\n";
  std::cout << "----------------------------------------------------------\n";
}

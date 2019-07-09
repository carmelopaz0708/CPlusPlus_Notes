/*
  DYNAMIC POINTERS
    Dynamic pointers are the gist of memory allocation is C++. Dynamic pointers allow programmers to create unnamed memory during runtime to hold values. Unnamed memory
  is resized according to the data type it is associated to and can be reused multiple times in a program, storing any value it is given. Reusing dynamic pointers
  decreases overhead, decreases memory usage and increases program execution.
    Creating dynamic pointers is accomplished by using the 'new' operator. In contrast, the 'delete' operator removes memory stored in a dynamic pointer (but not the 
  pointer itself). You should use delete only to free memory allocated with new. However, it is safe to apply delete to a null pointer. A program using dynamic pointers 
  should always balance the use of new and delete respectively. Whatever created by new should be destroyed by delete. A balanced program should result give a dynamic
  pointer a null value.
    The program below takes in decimal values from the user and stores them in dynamic pointers. The value is repeated as the multiplicator for the next equation until
  the sequence reaches ten. This program uses nothing but pointers and is highly efficient as compared to using an array or a set of twenty variables to each store an
  individual value.

  @auth siege
  @rev 07/04/19
*/

#include <iostream>

int main() {
  long double * p_userIn = new long double;     // Creates a dynamic pointer called p_userIn
  long double * p_result = new long double;     // Creates a dynamic pointer called p_result

  std::cout << "\nMATH MATH MATH TIME!!!\nWho wants to do math? Go ahead! Give me a number(Go easy on me)!\nWhat's the number?__\b";
  std::cin >> *p_userIn;      // Stores an input value *p_userIn. *p_userIn acts as if its a variable.
  std::cout << "\nAlrighty here it goes...\nGenerating dynamic arrays...\nAlloting memory location...\nMemory allocation successful! Please refer to the table below:\n";
  std::cout << "p_userIn = " << p_userIn << "\t| *p_userIn = " << *p_userIn;
  std::cout << "\np_result = " << p_result << "\t| *p_result = " << *p_result << "\n";

  for (int count = 1; count <= 10; count++) {
    *p_result = *p_userIn * count;        // This equation will repeat until count surpasses ten
    std::cout << "\n" << *p_userIn << " * " << count << " = " << *p_result;   // Display the result
    delete p_userIn;                      // Delete p_userIn to make way for a new value to be stored
    *p_userIn = *p_result;                // Have the empty *p_userIn take in the value from *p_result
    delete p_result;                      // Delete p_result so that *p_result can be reused
  }
  delete p_userIn;                        // The last iteration in the loop stores the final computation to p_userIn. That should be deleted since its no longer used.

  std::cout << "\n\nCleaning house...";   // Check if we missed something.
  std::cout << "\np_userIn = " << p_userIn << "\t*p_userIn = " << *p_userIn;
  std::cout << "\np_result = " << p_result << "\t*p_result = " << *p_result << "\n";
}

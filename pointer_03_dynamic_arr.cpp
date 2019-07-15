/*
  DYNAMIC ARRAYS
    Pointers are useful in a lot of things but what makes them indispensable tools are for when they are used to make arrays, structures and memory intensive variables.
  One such tool is the dynamic array, a pointer to an array of datatypes built at runtime. Dynamic arrays are like arrays and that they are capable of holding multiple
  cells of the same data types. Dynamic arrays are also akin to pointers in that they are constructed only when the program needs them and are discarded afterwards (with
  the specific instructions written in the program of course).
    Dynamic arrays follow the same rules that normal pointers adhere to. Memory is created with the 'new' operator and is freed using the 'delete' operator. The 
  difference between the two lies in syntax. Dynamic arrays require bracket notation to initiate new and delete; normal pointers don't.
    After a dynamic array has been initialized you can use its array name in arithmetic equations. This is known as "pointer arithmetic" and is made possible since C++
  treats array names as pointers anyway. Pointer arithmetic uses the size of a cell in a dynamic array as a baseline and shifts the value according to the number of bytes
  that cell can hold. For example, given a dynamic array of ints with each cell being 4 bytes wide, adding 3 to the array name moves the addresses 12 bytes to the left,
  or three cells to the left if reffering to the array name.
    The program below uses a dynamic array to size a user generated set of integer values at runtime. These values are then shifted left or right, depending on the
  user's preference, before being displayed to the terminal. The dynamic array exists only in the duration that the program uses it and is subsequently deleted, freeing
  precious memory.

  @auth siege
  @rev 07/11/19
*/

#include <iostream>

unsigned int inputLimitFunc();
int inputShiftFunc();

int main() {
  unsigned int user_limit;
  int user_shift;

  user_limit = inputLimitFunc();
  user_shift = inputShiftFunc();

  std::cout << "\nEnter the cell values: \n";
  int * p_input_array = new int [user_limit];
  for (int i = 0; i < user_limit; i++) {
    std::cout << "Cell " << (i + 1) << ": ";
    std::cin >> p_input_array[i];
  }
  std::cout << "\nDynamic array shown below: \n|\t";
  for (int i = 0; i < user_limit; i++) {
    std::cout << p_input_array[i] << "\t|\t";
  }
  std::cout << "\n";
  
  p_input_array = p_input_array + user_shift;

  std::cout << "\nShifted dynamic array shown below: \n|\t";
  for (int i = 0; i < user_limit; i++) {
    std::cout << p_input_array[i] << "\t|\t";
  }
  std::cout << "\n";

  p_input_array = p_input_array - user_shift;

  delete [] p_input_array;
}

unsigned int inputLimitFunc() {
  unsigned int input_limit;
  std::cout << "\nInput array size (From 1 to 10 only): _\b";
  std::cin >> input_limit;
  if ((input_limit >= 1) && (input_limit <= 10)) {
    std::cout << "Array of ints with given size " << input_limit << " acknowledged...";
    return input_limit;
  } else {
    std::cout << "\nProgram aborted. Good day!\n";
    return 0;
  }
}

int inputShiftFunc() {
  int input_shift;
  std::cout << "\n\nEnter shift value (-10 to +10 only, to be added to the dynamic pointer position): _\b";
  std::cin >> input_shift;
  if ((input_shift >= -10) && (input_shift <= 10)) {
    std::cout << "Shift value of " << input_shift << " acknowledged...\n";
    return input_shift;
  } else {
    std::cout << "Invalid value. Please try again";
    inputShiftFunc();
  }
}

/*
  C-STYLE STRINGS
  C-Style strings are an array of characters terminating with the null (\0) character. As compared to using C++ string header files, c-style strings have no overhead, freeing
more memory for other parts of the program. This is especially useful for situations where speed is a priority and in environments with limited memory as string initialized
characters slow down program execution. C-Style strings also allow for stricter coding parameters. This is one way to fool-proof code when asking for user input. However,
The tradeoff to using c-style strings is complexity. What several lines of code in a c-style string declaration can be achieved with one or two lines using the string header 
file. Generally, c-style strings are preffered over string initialized variables although it is in your discretion as a programmer to choose between the two.
  Note that when declaring c-style strings, always include the terminating character as part of the string. A string such as \'example\' actually contains 8 characters 
instead of 7. This is to tell the compiler when to stop reading from the array. 

  @auth siege
  @rev 05/28/19
*/

#include<iostream>

int main() {
  char input_name[11];      // Initialize the array of characters
  const int length_name = 11;   // Initialize length of the c-style string
  
  std::cout << "Enter your name:_\b";
  std::cin.getline(input_name, length_name);    // Prompts the user to fill in the array
  std::cout << "\nWelcome " << input_name << "!";
}

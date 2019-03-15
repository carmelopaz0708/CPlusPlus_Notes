/*
  REMOVING THE USING DIRECTIVE
  Initially, when programming in C++, we we're told to use declare this line of code, 'using namespace std'. It was to call on the standard library, allowing use of the
functions cout, cin, end, etc. Although it would be a good first practice, declaring the 'using' directive is bad programming practice in C++. By adding that line of code,
you're effectively calling all the functions in the standard library, slowing down your program to some degree. This would not pose a problem for small programs but would
affect long programs considerably, where speed is an issue. Additionally, and more importantly, the functions of the using directive will interfere with other included files in
your program if they use the same namespace. For example, if library 'foo' used 'cout' in his library, it would generate an error in your program since the compiler does not
know what 'cout' he should use.
  To avoid this, programmers are asked to include the namespace when they are using the variable, hence the 'std::___' whenever a namespace from the standard library is used. It
may be a longer type process but it ensures the above errors will not occur. You can still opt to use the using directive, but be wary of possible errors that may arise. Typing
out std::___ is good programming practice and should be followed everytime you create your C++ program.

@author siege
@init 02/26/19
*/

#include <iostream>

int calcu(int, int);        // Function prototype. Declare when using a function.

int main() {
  int var1, var2;

  std::cout << "Enter variable 1: ";
  std::cin >> var1;
  std::cout << "Enter variable 2: ";
  std::cin >> var2;

  int output = calcu(var1, var2);
  std::cout << "\nThe answer is " << output << std::endl;
}

int calcu(int var1, int var2) {
  int output = var1 * var2;
  return output;
}

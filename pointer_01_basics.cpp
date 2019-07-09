/*
  POINTER BASICS
    Pointers are a core asset to C++ programming. They are dynamic memory types that store a variable's address. Pointers, as the name implies, 'points' to where a value
  is stored in memory. This may seem trivial but the applications of pointers are numerous. Pointers allow programmers to reuse memory locations and create dynamic
  memory variables on runtime. This is akin to creating space only when the program needs it and relieving that space once the program has no need for it, drastically
  saving memory to be used by other applications. Pointers are also used to pass a value directly to a function, structure or array instead of creating a copy that the
  latter will use. This way, memory space is saved and overhead, improving program speed.  
    As useful as they are pointers don't come without its own dangers, some of which are the reason new and experienced programmers struggle with C++. Indeed pointers
  when misused produce some of the most insidious, cryptic and difficult errors and behaviours to debug. As a general rule, NEVER POINT A VALUE TO AN UNINITIALIZED 
  POINTER. Second, and this applies to dynamic pointers, is that WHENEVER YOU BUILD A DYNAMIC POINTER, YOU MUST ALSO DESTROY IT AFTER ITS USE. There are many other rules
  that apply to pointers but the previous two are the most important since it applies to all types of pointers.

  Note: After initializing a pointer called p_name
  p_name  - Stores the pointer address 
  *p_name - Points to the value stored on the pointer address

  @auth siege
  @rev 06/12/19
*/

#include<iostream>

int main() {
  int value = 1250;       // Initialize a value to a variable named generic_value
  int * p_generic;        // Syntax for creating a pointer called p_generic
  p_generic = &value;     // Pointer 'p_generic' points to the address of a variable named 'value'

  std::cout << "\nValue via variable = " << value;
  std::cout << "\nValue via pointer  = " << *p_generic << "\n";    // Pointer points to int variable value hence value = *p_generic

  std::cout << "\nAddress via &         = " << &value;
  std::cout << "\nAddress via p_generic = " << p_generic << "\n";   // Pointer points to address of variable hence &value = p_generic

  std::cout << "\nBoth value and *p_generic hold the same value";
  std::cout << "\nBoth &value and p_generic hold the same address\n";
}

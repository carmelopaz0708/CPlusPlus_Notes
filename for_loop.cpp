/*
    for_loop.cpp
    Introducing the 'for' loop. The 'for' loop repeats a set of instructions under its curly brace when the condition inside the loop holds true. Condition is checked before every iteration.
*/

#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++) {                               // Basic 'for' loop syntax (value_ini, loop_cond, loop_update)
        std::cout << "\nThis is a for loop";                    // Condition everytime 'for' loop is true
    }
    std::cout << "\n\nThe counter has exceeded the value of i"; // For loop exit, goes to next line in the code
}

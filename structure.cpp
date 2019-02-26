/*
  structure.cpp
  Demonstrates how to create structures.
  
  The structure is a compound data form for C++. Structures function like arrays wherein they are capable of storing multiple pieces of 
data in partitioned cells. Unlike arrays however, structures are not limited to one type of data. Structures can house multiple types of
data, from primitive types to complex types. To call on a structure's contents, use the constructor (dot) operator.

  The sample program uses a structure to obtain the details of each guest that have entered the fancy party. Then, we use a structure 
again to compute their total net worth.
*/

#include <iostream>

// This is the structure's framework. Here we define what constitutes the structure
struct guestList {              // naming our structure guestlist.
  std::string name;             // string is not a primitive C++ data type, requires the std:: library
  float netWorth;               // the contents of guestlist. Order of data types are strictly implemented
  std::string parkSpace;
};

int main()
{
  // As of this writing, creating structures are implemented inside the main() function although experiments will be made if user 
  // made functions can call on structures
  
  // structure syntax
  guestList tony {
    "Tony Malarkey",
    1.2e5,
    "A5",
  };
  
  guestList vienna {
    "Vienna Vicci",
    6.2e5,
    "C3",
  };
  
  guestList jones {
    "Jacob \'Smug Money\' Johannsen",
    7.2e7,
    "B3",
  };
  
  std::cout << "The combined net worth of all the guest is " << tony.netWorth + vienna.netWorth + jones.netWorth;
}


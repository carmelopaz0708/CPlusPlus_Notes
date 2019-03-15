/*
  STRUCTURES
  A structure is a versatile data form capable of holding numerous sets of different data types. Like arrays, structures allocate same memory spaces to partition data within it.
But unlike arrays, a structure can hold more than one data type. This means its capable of holding primitive data types (integers, floats, etc.) to compound data types (arrays,
strings, structures, etc.).
  To create a structure, we first define its blueprint (declared as a global variable). This blueprint indicates the syntax of how the structure should be called. At any time,
any instance of that structure's name when called will follow the blueprint assigned to it. Data inside the structure can be called or manipulated using the constructor (dot
operator).
  The following is a program that uses a structure to keep tabs with rich guest and exploit their charitability.

@auth siege
@init 03/06/19
*/

#include <iostream>

// Structure declaration, follow syntax. Note that string is part of the std library and requires std::
struct richGuest {std::string name; double net; bool charit; double donate;};   //'struct structName {args}'

int main() {
  long double netWorthTot, donationsTot;

  richGuest g01 {"Bill Gates", 8.9e8, true, 7.6e6};   // Syntax for adding objects to the structure, object strictly follows structure blueprint
  richGuest g02 {"Elon Musk", 12.3e7, true, 3.0e6};   // No need to write data type since data type was initialized at structure initialization statement
  richGuest g03 {"Batman", 15.8e9, true, 5.7e6};
  richGuest g04 {"Daddy Bigbucks", 1.7e5, false, 450e3};
  richGuest g05 {"Johnny Sins", 1.0e6, true, 120e3};

  // Using constructors to access data
  netWorthTot = g01.net + g02.net + g03.net + g04.net + g05.net;
  donationsTot = g01.donate + g02.donate + g03.donate + g04.donate + g05.donate;

  std::cout << "--------------------------------------------------------------------------\n";
  std::cout << "                          ACCESSING STATISTICS                            \n";
  std::cout << "--------------------------------------------------------------------------\n";
  std::cout << "Guests Total Net Worth: " << netWorthTot;
  std::cout << "\nHighest Net Worth: " << g03.name;
  std::cout << "\nLowest Net Worth: " << g04.name;
  std::cout << "\nTotal Donations Received: " << donationsTot;
  std::cout << "\nHighest Donor: " << g01.name;
  std::cout << "\nLowest Donor: " << g05.name;
  std::cout << "\n--------------------------------------------------------------------------\n";
  std::cout << "                         ACCESSING USER PROFILE                            \n";
  std::cout << "--------------------------------------------------------------------------\n";
  std::cout << g01.name << " = " << g01.charit << "\n";
  std::cout << g02.name << " = " << g02.charit << "\n";
  std::cout << g03.name << " = " << g03.charit << "\n";
  std::cout << g04.name << " = " << g04.charit << "\n";
  std::cout << g05.name << " = " << g05.charit << "\n";
  std::cout << "--------------------------------------------------------------------------\n";
}

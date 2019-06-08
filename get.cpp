/*
  GETLINE PROBLEMS
  Getline is a useful function for returning a line of text but can be constricting when using it in conjuction with numeric inputs. The standard cin for example returns a 
newline character on input que. When taking input directly after a cin, getline reads the newline from the previous input as a null character. This abruptly ends the input for
the getline command. In order to overcome this problem, assign a get() statement after the cin input. get() will read that newline and discard it, enabling getline() to be
used again.

  @auth siege
  @rev 06/08/19
*/

#include<iostream>

int main() {
  int input_year_built, input_no_of_people;
  const int array_size = 120;
  static char input_address[array_size];
  static char input_home_owner[array_size];
  
  std::cout << "\n------------------------------------------------\n";
  std::cout << "             HOMEOWNER INFO SHEET";
  std::cout << "\n------------------------------------------------\n";
  
  std::cout << "What year was your house built? ";
  std::cin >> input_year_built;
  std::cin.get();
  std::cout << "Where is your house address? ";
  std::cin.getline(input_address, array_size);
  std::cout << "How many people live there? ";
  std::cin >> input_no_of_people;
  std::cin.get();
  std::cout << "Who is the current homeowner? ";
  std::cin.getline(input_home_owner, array_size);
  
  std::cout << "\n------------------------------------------------\n";  
  std::cout << "Name: " << input_home_owner << std::endl;
  std::cout << "Address: " << input_address << std::endl;
  std::cout << "Year Built: " << input_year_built << std::endl;
  std::cout << "No of Residents: " << input_no_of_people << std::endl;
}

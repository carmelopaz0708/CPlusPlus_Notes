/*
  VECTORS
    Vectors are sequence containers that operate very much like arrays. Unlike arrays however, vectors can change their size dynamically at runtime. Moreover, memory 
  allocation is handled automatically by its container. The vector and standard library class offer unique and useful functions for operating vectors. Vectors have
  out of bounds checking. The added functionality and ease of use however affects program execution. Vectors are normally slower in operation when compared to arrays
  and pointers. 
    Although vectors can be manipulated using the bracket notation, this method is discouraged. Using bracket notation on a vector removes its ability to check for out 
  of bounds in its elements. If for example the program called on a vector element which is out of bounds, the program will crash. It is best practice to use the built 
  in functions the vector and standard library class offers to retain the bound checking capability.

  @auth siege
  @rev 10/06/19
*/

#include<iostream>
#include<vector>   

void displayVector();
void useVector();

int main() {
  const int shrt_width = 3;
  const int long_width = 100;
  int val = 12;

  // Three examples of vector initialization shown below
  std::vector<int> numbers_set1;                     // Initializes an empty vector of ints. Empty cells are automatically set to 0
  std::vector<int> numbers_set2 (shrt_width);        // Initializes an empty vector of ints with width 'set2_width'. Empty cells are also 0.
  std::vector<int> numbers_set3 (long_width, val);   // Initializes a vector of ints with width 'set3_width' and having all elements set to 5

  displayVector();
  useVector();
}

void displayVector() {
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};     // Initializes a vector of chars by stating its elements explicitly

  std::cout << "\nExample 01: DISPLAYING VECTOR VALUES";
  
  std::cout << "\na) Traditional index-based:\n | ";
  for(std::size_t i = 0; i < vowels.size(); i++) {          // "size" returns the number of elements in the vector
    std::cout << vowels.at(i) << " | ";                     // "at" is a function that locates the position of a vector
  }
  
  std::cout << "\nb) Range-based for loop:\n | ";         
  for(auto i: vowels) {
    std::cout << i << " | ";
  }

  std::cout << "\nd) Iterator-based ranged:\n | ";          // Works just like a pointer
  for(auto i = vowels.begin(); i != vowels.end(); i++) {    // begin() and end() are functions of the standard library
    std::cout << *i << " | ";                               // i points to the address of the initial element
  }

  std::cout << std::endl;
}

void useVector() {
  double input;
  std::vector<double> ave_num;

  std::cout << "\nExample 02:USING VECTORS\nEnter the values (type 'e' to end): ";
  while((std::cin >> input) && (input != 'e')) {
    ave_num.push_back(input);                               // On Linux, use CTRL+D to exit the stream. Separating values by a whitespace queues them to the stream
  }

  std::cout << "\nVector size: " << ave_num.size();
  std::cout << "\nVector values: | ";
  for(int i = 0; i < ave_num.size(); i++) {
    std::cout << ave_num.at(i) << " | ";
  }
  std::cout << std::endl;
}

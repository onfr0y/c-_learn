#include <iomanip>
#include <iostream>
#include <string>

// A simple class definition
class MyClass {
public:
  int myNum;
  std::string myString;
};

int main() {
  // Instantiating an object of MyClass
  MyClass myObj;

  // Setting the attributes
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Printing the attribute values to the console
  std::cout << myObj.myNum << std::endl;
  std::cout << myObj.myString << std::endl;

  return 0;
}

#include <iomanip>
#include <iostream>
#include <string>


class MyClass {
public:
  int myNum;
  std::string myString;
 ;

int main() {
  
  MyClass myObj;

  
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Printing the attribute values to the console
  std::cout << myObj.myNum << std::endl;
  std::cout << myObj.myString << std::endl;

  return 0;
}

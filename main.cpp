#include <iostream>
#include <string>

int main() {
  // array

  //   std::string car[3];

  //   car[0] = "Corvette";
  //   car[1] = "Mustang";
  //   car[2] = "Mercedez";

  //   for (int i = 0; i < 3; i++) {
  // std::cout << car[i] << std::endl;
  //   }

  // size of () = determines the size in bytes

  //   double gpa = 2.5;
  //   char grade = 'F';
  //   bool student = true;
  //   char grades[] = {'A', 'B', 'C', 'D'};
  double gpas[] = {2.4, 5.4, 342.4};

  //   std::cout << sizeof(gpa) << " Bytes\n";
  //   std::cout << sizeof(student) << " bytes\n";
  //   std::cout << sizeof(grade) << " Bytes\n";
  //   std::cout << sizeof(grades) << " Bytes\n";
  // the size of array depends on the array [0]

  std::string student[] = {"SpongeBob", "Patrick", "Squidward"};

  // for cout all of the number

  for (int i = 0; i < 3; i++) {
    std::cout << student[i] << std::endl;
  }

  //   another way
  for (int i = 0; i < sizeof(student) / sizeof(std::string); i++) {
    std::cout << student[i] << std::endl;
  }

  //   to cout  the gpa:

  for (int i = 0; i < sizeof(gpas) / sizeof(double); i++) {
    std::cout << gpas[i] << '\n';
  }
}

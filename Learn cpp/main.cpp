#include <iomanip>
#include <iostream>
#include <string>
double getTotal(double prices[], int size);
int searchArray(int array[], int size, int element);
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
  //   //   bool student = true;
  //   //   char grades[] = {'A', 'B', 'C', 'D'};
  //   double gpas[] = {2.4, 5.4, 342.4};

  //   //   std::cout << sizeof(gpa) << " Bytes\n";
  //   //   std::cout << sizeof(student) << " bytes\n";
  //   //   std::cout << sizeof(grade) << " Bytes\n";
  //   //   std::cout << sizeof(grades) << " Bytes\n";
  //   // the size of array depends on the array [0]

  //   std::string students[] = {"SpongeBob", "Patrick", "Squidward"};
  //   int grades[] = {54, 43, 32};

  //   for (int grade : grades) {
  //     std::cout << grade << '\n';
  //   }
  //   for (std::string student : students) {
  //     std::cout << student << '\n';
  //   }
  // //   // for cout all of the number

  // //   for (int i = 0; i < 3; i++) {
  // //     std::cout << student[i] << std::endl;
  // //   }

  // //   //   another way
  // //   for (int i = 0; i < sizeof(student) / sizeof(std::string); i++) {
  // //     std::cout << student[i] << std::endl;
  // //   }

  // //   //   to cout  the gpa:

  // //   for (int i = 0; i < sizeof(gpas) / sizeof(double); i++) {
  // //     std::cout << gpas[i] << '\n';
  // //   }

  // //   return 0;

  //   double prices[] = {34.3, 3342.43, 432342.2342342};
  //   int size = sizeof(prices) / sizeof(double);
  //   double total = getTotal(prices, size);
  //   std::cout << "$" << std::fixed << std::setprecision(2) << total <<
  //   std::endl;

  //   return 0;
  // }

  // double getTotal(double prices[], int size) {
  //   double total = 0;

  //   for (int i = 0; i < size; i++) {
  //     total = total + prices[i];
  //   }
  //   return total;
  int numbers[] = {1, 2, 3, 4};
  int size = sizeof(numbers) / sizeof(int);
  int index;
  int myNum;

  std::cout << "Enter element to search for : " << '\n';
  std::cin >> myNum;

  index = searchArray(numbers, size, myNum);
  return 0;
}
int searchArray(int array[0], int size, int element) {
  for (int i = 0; i < size < i++) {
    if (array[i] == element) {
      if (array[i] == element) {
        return i;
      }
    }
  }
}

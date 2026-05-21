#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

// learn c++ chapter 2.3: void return values
// // void printHi() { std::cout << "HI" << '\n'; }
// int main() {
//   printHi();

// //  std::cout << printHI(); // we can't use this becaue this is an error.
//   return 0;
// }

// Question A of 2.3
// void printA() { std::cout << "A\n"; }
// void printB() { std::cout << "B\n"; }

// int main() {
//   printA();
//   printB();
// }

// 2.4 introduction to function parameters and arguements
// int getValueFromUser() {

//   std::cout << "Enter an integer: ";
//   int input{};
//   std::cin >> input;
//   return input;
// }
int getValueFromUser() {

  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;
  return input;
}

int main() {

  int num{getValueFromUser()};

  std::cout << num << " dobuled is: " << num * 2 << '\n';
}
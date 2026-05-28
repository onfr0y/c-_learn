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
// // }

// int main() {

// int num{getValueFromUser()};

// std::cout << num << " dobuled is: " << num * 2 << '\n';
// } // if we want it -- output line -- into its own function // void
// printDouble () { //   int num{getValueFromUser()}; //   std::cout << num << "
// dobuled is: " << num * 2 << '\n'; // } // int main () { //   int num
// {getValueFromUser()};

//   printDouble();
// }

// 2.5 -- introduction to local scope
// int add(int x, int y)
//  {
//   int z{x + y};

//   return z;
// }

// void doSomething() { std::cout << "Hello \n"; }

// int main() {
//   int x{0};

//   doSomething();

//   return 0;
// }

// // 2.7 -- forward declarations and definitions
// int add(int x, int y);

// int main() {
//   std::cout << "The sum of 3 & 4 is: " << add(3, 4) << '\n';
//   return 0;
// }

// int add(int x, int y) { return x + y; }
// it gonna be error so we need to fix by this; forward declaration;

//  2.7 Introduction to object-orie
enum class TrafficLight { Red, Yellow, Green };

int main() {
    // Usage
    TrafficLight mySignal = TrafficLight::Red;

    // This will fail (Type safety):
    // if (mySignal == 0) { ... }

    // Explicit cast is required if you need the integer value:
    int value = static_cast<int>(mySignal);

    std::cout << "TrafficLight Red integer value: " << value << '\n';
    
    return 0;
}
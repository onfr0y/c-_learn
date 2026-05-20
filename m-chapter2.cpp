#include <iostream>

// void doPrint() {
    // std::cout << "this is doPrint function";
// }
// void doB() {
    // std::cout << "in DoB()\n";
// }
// void doA() {
    // std::cout << "starting doa \n";
    // doB();
    // std::cout << "ending doa \n";
// }
// void getValueFromUser() {
//     std::cout << "What is your favorite number: ";
//     int inputje{};
    // std:: cin >> input;e
//
// }
double getValueFromUser() {
    std::cout << "What is your favorite number: ";  
    double num;
    std::cin >> num;
    return num;
}


int main() {
    double num { getValueFromUser()};

    std::cout << num << " doubled is: " << num << '\n';
}

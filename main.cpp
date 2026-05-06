#include <iostream>
#include <vector>


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void printMyNumbers(int num) {

    std::cout << "This is my Number: " << num << '\n';
}


int main() {
    printMyNumbers( 300);
    int energy = 100;
    while (energy > 0) {
        std::cout << "Still running..." << std::endl;
        energy--;
    }

    int choice;
    do {
        std::cout << "Enter 0 to exit:";
        std::cin >> choice;
    } while (choice != 0);
}
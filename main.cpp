#include <iostream>
#include <string>

int main() {
    std::cout << "good morning my gooed fellow, what is your favorite character? ";
    std::string character{};
    
    std::cin >> character;

    std::cout << "Nice! " << character << " is a great choice." << std::endl;
    
    return 0;
}

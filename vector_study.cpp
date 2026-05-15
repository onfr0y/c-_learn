#include <iostream>
#include <vector>
#include <string>

int main() {
    // 1. Initialize a vector of strings
    std::vector<std::string> orders = {"Spicy Krapow", "Salmon Toro"};

    // 2. Add a new item
    orders.push_back("Coke Zero");

    std::cout << "--- Your Order ---" << std::endl;

    // 3. Modern loop (Range-based for loop)
    // We use 'const' because we aren't changing the items
    // We use '&' (reference) to avoid copying the string for better performance
    for (const std::string& item : orders) {
        std::cout << ">> " << item << std::endl;
    }

    std::cout << "\nTotal items: " << orders.size() << std::endl;

    // 4. Accessing by index
    std::cout << "First thing to eat: " << orders[0] << std::endl;

    // 5. Removing the last item
    orders.pop_back();
    std::cout << "Removed last item. New size: " << orders.size() << std::endl;

    return 0;
}

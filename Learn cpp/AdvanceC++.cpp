#include <iostream>
#include <vector>
#include <string>

// 1. Class demonstrating Member Initializer Lists and In-class Defaults
class Trader {
private:
    std::string name{"Anonymous"}; // Default Member Initializer (In-class default)
    double balance{1000.0};        // Default Member Initializer
    const int traderId;            // Must be initialized in Member Initializer List

public:
    // Constructor using Member Initializer List
    Trader(int id, std::string t_name, double t_balance) 
        : traderId(id), name(t_name), balance(t_balance) {
        // Preferred! Member variables are initialized before the constructor body runs.
    }

    // Constructor with default arguments, showing direct constructor initialization
    Trader(int id) : traderId(id) {
        // name and balance take the in-class default values: "Anonymous" and 1000.0
    }

    void display() const {
        std::cout << "Trader ID: " << traderId 
                  << " | Name: " << name 
                  << " | Balance: $" << balance << "\n";
    }
};

// 2. Struct demonstrating Aggregate Initialization
struct TradingPair {
    std::string baseAsset;
    std::string quoteAsset;
    double price;
};

// 3. Class demonstrating std::initializer_list
class Portfolio {
private:
    std::vector<std::string> assets;
public:
    // Constructor taking std::initializer_list
    Portfolio(std::initializer_list<std::string> list) : assets(list) {}

    void display() const {
        std::cout << "Portfolio Assets: ";
        for (const auto& asset : assets) {
            std::cout << asset << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    std::cout << "==================================================\n";
    std::cout << "         LEARNING MODERN C++ INITIALIZATION       \n";
    std::cout << "==================================================\n\n";

    // --- CONCEPT 1: Uniform Initialization (Brace Initialization `{}`) ---
    std::cout << "[1] Uniform Initialization:\n";
    int a{5};         // Direct brace initialization
    double b{3.14};   // Direct brace initialization
    // int narrowing_err{3.14}; // ERROR: Narrowing conversion (double to int is blocked by {})
    std::cout << "  Initialized a: " << a << ", b: " << b << "\n\n";

    // --- CONCEPT 2: Member Initializer Lists ---
    std::cout << "[2] Member Initializer List:\n";
    Trader t1{101, "Khaotang", 5000.75}; // Calls full constructor
    Trader t2{102};                      // Calls constructor using in-class defaults
    std::cout << "  t1: "; t1.display();
    std::cout << "  t2: "; t2.display();
    std::cout << "\n";

    // --- CONCEPT 3: Aggregate Initialization ---
    std::cout << "[3] Aggregate Initialization (No custom constructor needed):\n";
    TradingPair btc_usdt{"BTC", "USDT", 65000.0}; // Aggregate initialization
    std::cout << "  Pair: " << btc_usdt.baseAsset << "/" << btc_usdt.quoteAsset 
              << " @ $" << btc_usdt.price << "\n\n";

    // --- CONCEPT 4: std::initializer_list ---
    std::cout << "[4] List Initialization with std::initializer_list:\n";
    Portfolio myPortfolio{"BTC", "ETH", "SOL", "ADA"}; // Custom list init
    std::cout << "  "; myPortfolio.display();
    std::cout << "\n";

    std::cout << "==================================================\n";
    return 0;
}
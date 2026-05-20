#include <iostream>

// Function prototype: returns the index of the element if found, or -1 if not found
int searchArray(const int array[], int size, int element);

int main() {
    // A sample array of numbers
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int myNum;

    std::cout << "=================================\n";
    std::cout << "     Array Search Program        \n";
    std::cout << "=================================\n";
    
    // Display the array elements to the user
    std::cout << "Available elements: [";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << (i < size - 1 ? ", " : "");
    }
    std::cout << "]\n\n";

    // Ask the user for the element to search for
    std::cout << "Enter element to search for: ";
    std::cin >> myNum;

    // Search the array
    int index = searchArray(numbers, size, myNum);

    // Output the search results with clear feedback
    std::cout << "\n---------------------------------\n";
    if (index != -1) {
        std::cout << "Success! Found " << myNum << " at index: " << index << "\n";
    } else {
        std::cout << "Oops! " << myNum << " is not in the array.\n";
    }
    std::cout << "=================================\n";

    return 0;
}

/**
 * Performs a linear search on an array to find a specific element.
 * 
 * @param array   The array to search through. Passed as const to prevent modification.
 * @param size    The number of elements in the array.
 * @param element The target value to search for.
 * @return        The index of the element if found; -1 if the element is not present.
 */
int searchArray(const int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i; // Element found, return the index immediately
        }
    }
    return -1; // Element not found after checking the entire array
}

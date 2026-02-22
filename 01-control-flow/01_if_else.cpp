// Conditional statements

#include <iostream>

int main() {
    // === Basic if-else ===
    int x = 15;

    if (x > 10) {
        std::cout << x << " is greater than 10" << std::endl;
    } else if (x > 5) {
        std::cout << x << " is greater than 5 but not 10" << std::endl;
    } else {
        std::cout << x << " is 5 or less" << std::endl;
    }

    // === Boundary checking (THE most common CUDA pattern) ===
    int N = 1000;      // total data elements
    int idx = 1024;    // simulating a thread index

    if (idx < N) {
        std::cout << "\nThread " << idx << " is within bounds — process data" << std::endl;
    } else {
        std::cout << "\nThread " << idx << " is OUT of bounds — skip" << std::endl;
    }


    // === Ternary operator (compact if-else) ===
    int a = 10, b = 20;
    int max_val = (a > b) ? a : b; // Read it as: "Is a > b? If yes, pick a. If no, pick b."
    std::cout << "\nMax of " << a << " and " << b << " is " << max_val << std::endl;

    // === Combining conditions ===
    int row = 5, col = 3;
    int rows = 10, cols = 8;

    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        std::cout << "Position (" << row << ", " << col << ") is within grid bounds" << std::endl;
    }
    // This 2D bounds check is common for image processing kernels

    return 0;
}
// Arithmetic, comparison, logical, and bitwise operators

#include <iostream>

int main() {
    // === Arithmetic operators ===
    int a = 17, b = 5;

    std::cout << "=== Arithmetic ===" << std::endl;
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << a << " / " << b << " = " << (a / b) << " (integer division)" << std::endl;
    std::cout << a << " % " << b << " = " << (a % b) << " (modulo/remainder)" << std::endl;

    // === Comparison operators ===
    std::cout << "\n=== Comparison ===" << std::endl;
    std::cout << "5 == 5: " << (5 == 5) << std::endl;
    std::cout << "5 != 3: " << (5 != 3) << std::endl;
    std::cout << "5 > 3: " << (5 > 3) << std::endl;
    std::cout << "5 < 3: " << (5 < 3) << std::endl;
    std::cout << "5 >= 5: " << (5 >= 5) << std::endl;

    // === Logical operators ===
    std::cout << "\n=== Logical ===" << std::endl;
    bool x = true, y = false;
    std::cout << "true && false: " << (x && y) << std::endl;
    std::cout << "true || false: " << (x || y) << std::endl;
    std::cout << "!true: " << (!x) << std::endl;

    // === Bitwise operators ===
    unsigned int m = 0b1010;  // 10 in binary
    unsigned int n = 0b1100;  // 12 in binary

    std::cout << "\n=== Bitwise ===" << std::endl;
    std::cout << "1010 & 1100 (AND): " << (m & n) << std::endl;   // 1000 = 8
    std::cout << "1010 | 1100 (OR):  " << (m | n) << std::endl;   // 1110 = 14
    std::cout << "1010 ^ 1100 (XOR): " << (m ^ n) << std::endl;   // 0110 = 6
    std::cout << "~1010 (NOT): " << (~m) << std::endl;
    std::cout << "1010 << 1 (left shift):  " << (m << 1) << std::endl;  // 10100 = 20
    std::cout << "1010 >> 1 (right shift): " << (m >> 1) << std::endl;  // 0101 = 5

    // Bit shifting is often used in CUDA as a fast multiply/divide by powers of 2
    int val = 8;
    std::cout << "\n8 << 2 = " << (val << 2) << " (same as 8 * 4)" << std::endl;
    std::cout << "8 >> 1 = " << (val >> 1) << " (same as 8 / 2)" << std::endl;

    // === Increment/Decrement ===
    int i = 0;
    std::cout << "\n=== Increment ===" << std::endl;
    std::cout << "i = " << i << std::endl;
    std::cout << "i++ = " << i++ << " (post-increment, uses then increments)" << std::endl;
    std::cout << "i is now: " << i << std::endl;
    std::cout << "++i = " << ++i << " (pre-increment, increments then uses)" << std::endl;

    return 0;
}
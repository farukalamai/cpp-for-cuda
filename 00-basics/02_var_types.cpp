// Variables and data types 

#include <iostream>

int main() {
    // === Integer types ===
    int a = 42;                    // 4 bytes, most common
    unsigned int b = 100;          // 4 bytes, no negatives 
    long long c = 9999999999LL;    // 8 bytes
    short d = 32000;               // 2 bytes

    std::cout << "=== Integer Types ===" << std::endl;
    std::cout << "int: " << a << " (size: " << sizeof(int) << " bytes)" << std::endl;
    std::cout << "unsigned int: " << b << " (size: " << sizeof(unsigned int) << " bytes)" << std::endl;
    std::cout << "long long: " << c << " (size: " << sizeof(long long) << " bytes)" << std::endl;
    std::cout << "short: " << d << " (size: " << sizeof(short) << " bytes)" << std::endl;

    // === Floating point types ===
    float e = 3.14f;              // 4 bytes 
    double f = 3.14159265358979;  // 8 bytes

    std::cout << "\n=== Floating Point Types ===" << std::endl;
    std::cout << "float: " << e << " (size: " << sizeof(float) << " bytes)" << std::endl;
    std::cout << "double: " << f << " (size: " << sizeof(double) << " bytes)" << std::endl;

    // === Character and Boolean ===
    char g = 'A';      // 1 byte
    bool h = true;     // 1 byte

    std::cout << "\n=== Other Types ===" << std::endl;
    std::cout << "char: " << g << " (size: " << sizeof(char) << " bytes)" << std::endl;
    std::cout << "bool: " << h << " (size: " << sizeof(bool) << " bytes)" << std::endl;

    // === size_t — commonly used in CUDA for array sizes ===
    size_t N = 1000000;
    std::cout << "\nsize_t N: " << N << " (size: " << sizeof(size_t) << " bytes)" << std::endl;

    return 0;
}
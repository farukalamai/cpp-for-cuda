// Type casting between different data types

#include <iostream>

int main() {
    // === Implicit casting (automatic) ===
    int a = 10;
    float b = a;           // int → float 
    double c = b;          // float → double 

    std::cout << "=== Implicit Casting ===" << std::endl;
    std::cout << "int " << a << " → float " << b << " → double " << c << std::endl;

    // === Potential data loss ===
    float pi = 3.14159f;
    int pi_int = pi;       // float → int 

    std::cout << "\nfloat " << pi << " → int " << pi_int << " (data loss!)" << std::endl;

    // === C-style casting ===
    int x = 7, y = 2;
    float result_bad = x / y;           // integer division
    float result_good = (float)x / y;   // cast first, then divide

    std::cout << "\n=== C-Style Casting ===" << std::endl;
    std::cout << "7 / 2 (no cast): " << result_bad << std::endl;
    std::cout << "(float)7 / 2: " << result_good << std::endl;

    // === C++ style casting ===
    float result_cpp = static_cast<float>(x) / y;
    std::cout << "static_cast<float>(7) / 2: " << result_cpp << std::endl;

    // === unsigned int ===
    int negative = -1;
    unsigned int as_unsigned = static_cast<unsigned int>(negative);
    std::cout << "\n=== Unsigned Casting ===" << std::endl;
    std::cout << "int -1 as unsigned int: " << as_unsigned << " (wraps around!)" << std::endl;

    // === Casting with sizeof ===
    int N = 1000;
    size_t bytes = N * sizeof(float);  // calculate memory needed
    std::cout << "\n" << N << " floats = " << bytes << " bytes" << std::endl;

    return 0;
}
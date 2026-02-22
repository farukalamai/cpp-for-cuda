// For loops


#include <iostream>

int main() {
    // === Basic for loop ===
    std::cout << "=== Basic For Loop ===" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "i = " << i << std::endl;
    }

    // === Processing an array with a for loop ===
    const int N = 8;
    float data[N] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
    float result[N];

    std::cout << "\n=== Array Processing (CPU style) ===" << std::endl;
    for (int i = 0; i < N; i++) {
        result[i] = data[i] * 2.0f;
        std::cout << "data[" << i << "] * 2 = " << result[i] << std::endl;
    }


    // === Strided loop (important pattern) ===
    std::cout << "\n=== Strided Loop (step by 2) ===" << std::endl;
    for (int i = 0; i < N; i += 2) {
        std::cout << "data[" << i << "] = " << data[i] << std::endl;
    }

    // === Counting backwards ===
    std::cout << "\n=== Reverse Loop ===" << std::endl;
    for (int i = N - 1; i >= 0; i--) {
        std::cout << "data[" << i << "] = " << data[i] << std::endl;
    }

    // === Accumulation (reduction pattern) ===
    float sum = 0.0f;
    for (int i = 0; i < N; i++) {
        sum += data[i];
    }
    std::cout << "\nSum of all elements: " << sum << std::endl;

    return 0;
}
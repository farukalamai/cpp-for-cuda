// Function declaration, definition, and calling

#include <iostream>
#include <cstdio>

// === Function declaration (prototype) ===
// Tells compiler the function exists before we define it
int add(int a, int b);
float multiply(float a, float b);
void print_line();

// === Function with no return value ===
void greet(const char* name) {
    printf("Hello, %s!\n", name);
}

// === Function returning a value ===
int add(int a, int b) {
    return a + b;
}

float multiply(float a, float b) {
    return a * b;
}

void print_line() {
    std::cout << "----------------------------" << std::endl;
}

// === Function with default parameter ===
float scale(float value, float factor = 2.0f) {
    return value * factor;
}

// === Function that processes an array ===
float array_sum(float* arr, int N) {
    float sum = 0.0f;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // === Calling functions ===
    std::cout << "=== Basic Functions ===" << std::endl;
    greet("Faruk");

    int sum = add(10, 20);
    printf("add(10, 20) = %d\n", sum);

    float product = multiply(3.14f, 2.0f);
    printf("multiply(3.14, 2.0) = %.2f\n", product);

    print_line();

    // === Default parameters ===
    std::cout << "=== Default Parameters ===" << std::endl;
    printf("scale(5.0) = %.2f\n", scale(5.0f));         // uses default factor=2.0
    printf("scale(5.0, 3.0) = %.2f\n", scale(5.0f, 3.0f)); // override factor

    print_line();

    // === Array processing ===
    std::cout << "=== Array Processing ===" << std::endl;
    float data[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    int N = 5;
    printf("Sum = %.2f\n", array_sum(data, N));

    return 0;
}
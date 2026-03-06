// Same function name, different parameter types

#include <iostream>
#include <cstdio>

// === Overloaded add function — works with different types ===
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// === Overloaded print function ===
void print_val(int x) {
    printf("int: %d\n", x);
}

void print_val(float x) {
    printf("float: %.4f\n", x);
}

void print_val(double x) {
    printf("double: %.8f\n", x);
}

// === Overloaded array fill ===
void fill(int* arr, int N, int value) {
    for (int i = 0; i < N; i++) arr[i] = value;
}

void fill(float* arr, int N, float value) {
    for (int i = 0; i < N; i++) arr[i] = value;
}

int main() {
    // === Compiler picks the right version based on types ===
    std::cout << "=== Function Overloading ===" << std::endl;
    printf("add(3, 4) = %d\n", add(3, 4));
    printf("add(3.14f, 2.86f) = %.2f\n", add(3.14f, 2.86f));
    printf("add(1.111, 2.222) = %.3f\n", add(1.111, 2.222));

    std::cout << "\n=== Overloaded Print ===" << std::endl;
    print_val(42);
    print_val(3.14f);
    print_val(2.71828182845);

    // === Array fill with different types ===
    std::cout << "\n=== Array Fill ===" << std::endl;
    int int_arr[5];
    float float_arr[5];

    fill(int_arr, 5, 0);
    fill(float_arr, 5, 1.5f);

    printf("int array: ");
    for (int i = 0; i < 5; i++) printf("%d ", int_arr[i]);

    printf("\nfloat array: ");
    for (int i = 0; i < 5; i++) printf("%.1f ", float_arr[i]);
    printf("\n");

    return 0;
}
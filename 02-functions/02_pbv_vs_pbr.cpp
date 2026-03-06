// Pass by value vs pass by reference

#include <iostream>
#include <cstdio>

// === Pass by VALUE — makes a copy ===
void double_value(int x) {
    x = x * 2;  // only modifies the local copy
    printf("Inside double_value: x = %d\n", x);
}

// === Pass by REFERENCE — works with original ===
void double_reference(int& x) {
    x = x * 2;  // modifies the original variable
    printf("Inside double_reference: x = %d\n", x);
}

// === Practical example: swap two values ===
// Wrong way (by value — doesn't work)
void bad_swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Right way (by reference)
void good_swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// === Reference to avoid copying large data ===
// const reference — read only, no copy
void print_array(const float arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

// Modify array through reference semantics
// Arrays are always passed as pointers (by reference) in C/C++
void scale_array(float arr[], int N, float factor) {
    for (int i = 0; i < N; i++) {
        arr[i] *= factor;
    }
}

int main() {
    // === Pass by value demo ===
    std::cout << "=== Pass by Value ===" << std::endl;
    int a = 10;
    double_value(a);
    printf("After double_value: a = %d (unchanged!)\n", a);

    // === Pass by reference demo ===
    std::cout << "\n=== Pass by Reference ===" << std::endl;
    int b = 10;
    double_reference(b);
    printf("After double_reference: b = %d (changed!)\n", b);

    // === Swap demo ===
    std::cout << "\n=== Swap Demo ===" << std::endl;
    int x = 5, y = 10;
    printf("Before bad_swap: x=%d, y=%d\n", x, y);
    bad_swap(x, y);
    printf("After bad_swap:  x=%d, y=%d (unchanged!)\n", x, y);

    printf("Before good_swap: x=%d, y=%d\n", x, y);
    good_swap(x, y);
    printf("After good_swap:  x=%d, y=%d (swapped!)\n", x, y);

    // === Array example ===
    std::cout << "\n=== Array (always by reference) ===" << std::endl;
    float data[] = {1.0f, 2.0f, 3.0f, 4.0f};
    int N = 4;

    printf("Before: ");
    print_array(data, N);

    scale_array(data, N, 3.0f);

    printf("After scale by 3: ");
    print_array(data, N);

    return 0;
}
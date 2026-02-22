// Console input/output and printf (C-style)


#include <iostream>
#include <cstdio>    // for printf — C-style

int main() {
    // === C++ style I/O with cout/cin ===
    std::cout << "=== C++ Style I/O ===" << std::endl;

    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

    // === C-style printf ===
    std::cout << "\n=== C-Style printf ===" << std::endl;

    int x = 42;
    float y = 3.14f;
    double z = 2.71828;

    printf("int: %d\n", x);
    printf("float: %f\n", y);
    printf("float (2 decimals): %.2f\n", y);
    printf("double: %lf\n", z);
    printf("string: %s\n", "hello");
    printf("multiple: x=%d, y=%.2f\n", x, y);

    // Format specifiers 
    // %d   → int
    // %u   → unsigned int
    // %f   → float/double
    // %e   → scientific notation
    // %lu  → unsigned long
    // %p   → pointer address

    // === Printing pointer addresses ===
    int val = 100;
    printf("\nValue: %d, Address: %p\n", val, (void*)&val);

    return 0;
}
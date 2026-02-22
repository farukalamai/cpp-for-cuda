// While loops and do-while loops

#include <iostream>
#include <cmath>

int main() {
    // === Basic while loop ===
    std::cout << "=== Basic While Loop ===" << std::endl;
    int count = 0;
    while (count < 5) {
        std::cout << "count = " << count << std::endl;
        count++;
    }

    // === Do-while (runs at least once) ===
    std::cout << "\n=== Do-While Loop ===" << std::endl;
    int x = 10;
    do {
        std::cout << "x = " << x << std::endl;
        x--;
    } while (x > 7);

    // === Convergence loop (common in GPU algorithms) ===
    std::cout << "\n=== Convergence Example ===" << std::endl;
    float value = 100.0f;
    float target = 0.01f;
    int iterations = 0;

    while (value > target) {
        value = value * 0.5f;  // halve each iteration
        iterations++;
        std::cout << "Iteration " << iterations << ": value = " << value << std::endl;
    }
    std::cout << "Converged after " << iterations << " iterations" << std::endl;

    // === Break and continue ===
    std::cout << "\n=== Break and Continue ===" << std::endl;
    for (int i = 0; i < 10; i++) {
        if (i == 3) continue;   // skip iteration 3
        if (i == 7) break;      // stop at iteration 7
        std::cout << "i = " << i << std::endl;
    }

    // === Newton's method — sqrt approximation ===
    std::cout << "\n=== Newton's Method (sqrt of 25) ===" << std::endl;
    float number = 25.0f;
    float guess = number / 2.0f;
    float epsilon = 0.0001f;

    while (fabs(guess * guess - number) > epsilon) {
        guess = (guess + number / guess) / 2.0f;
        std::cout << "Guess: " << guess << std::endl;
    }
    std::cout << "sqrt(" << number << ") ≈ " << guess << std::endl;

    return 0;
}
/*
//sqrt approximation

Round 1:  guess = 12.5
          12.5 * 12.5 = 156.25  (far from 25, keep going)
          new guess = (12.5 + 25/12.5) / 2
                    = (12.5 + 2.0) / 2
                    = 7.25

Round 2:  guess = 7.25
          7.25 * 7.25 = 52.5625  (still far from 25)
          new guess = (7.25 + 25/7.25) / 2
                    = (7.25 + 3.448) / 2
                    = 5.349

Round 3:  guess = 5.349
          5.349 * 5.349 = 28.61  (getting close!)
          new guess = (5.349 + 25/5.349) / 2
                    = (5.349 + 4.674) / 2
                    = 5.011

Round 4:  guess = 5.011
          5.011 * 5.011 = 25.11  (very close to 25!)
          new guess = (5.011 + 25/5.011) / 2
                    ≈ 5.00001

Round 5:  guess ≈ 5.0
          5.0 * 5.0 = 25.0  (difference < 0.0001, STOP!)
*/
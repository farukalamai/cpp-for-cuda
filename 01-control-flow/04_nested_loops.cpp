// Nested loops 

#include <iostream>
#include <cstdio>

int main() {
    // === Basic nested loop (2D iteration) ===
    int rows = 4, cols = 6;

    std::cout << "=== 2D Grid Pattern ===" << std::endl;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("(%d,%d) ", row, col);
        }
        printf("\n");
    }

    // === Matrix operations (CPU style) ===
    const int N = 3;
    int matA[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matB[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matC[N][N] = {0};

    // Matrix addition — each element is independent
    std::cout << "\n=== Matrix Addition ===" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
            printf("%3d ", matC[i][j]);
        }
        printf("\n");
    }

    // === Triple nested loop: Matrix multiplication ===
    int result[N][N] = {0};

    std::cout << "\n=== Matrix Multiplication ===" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
            printf("%3d ", result[i][j]);
        }
        printf("\n");
    }

    // === Image-like processing pattern ===
    std::cout << "\n=== Image Processing Pattern ===" << std::endl;
    int width = 5, height = 4;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            // Convert 2D (x,y) to 1D index
            int linear_idx = y * width + x;
            printf("[%2d] ", linear_idx);
        }
        printf("\n");
    }

    return 0;
}
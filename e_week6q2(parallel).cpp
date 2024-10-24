#include <stdio.h>
#include <omp.h>

void matrix_multiply(int n, double matA[][], double matB[][], double result[][]) {
    #pragma omp parallel for
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0.0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

int main() {
    int n = 1000; // Size of the matrices
    double matA[n][n], matB[n][n], result[n][n];

    // Initialize the matrices (example initialization)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matA[i][j] = i + j;
            matB[i][j] = i - j;
        }
    }

    double start_time = omp_get_wtime();  // Start time

    matrix_multiply(n, matA, matB, result);

    double end_time = omp_get_wtime();  // End time

    printf("Result[0][0] = %f\n", result[0][0]);
    printf("Execution time with OpenMP: %f seconds\n", end_time - start_time);

    return 0;
}


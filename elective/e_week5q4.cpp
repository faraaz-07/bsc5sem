#include <stdio.h>
#include <omp.h>

#define SIZE 1000000

int main() {
    int arr[SIZE];
    int i;

    // Initialize array with values
    for (i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }

    // Parallelize array doubling using OpenMP
    #pragma omp parallel for lastprivate(i)
    for (i = 0; i < SIZE; i++) {
        arr[i] *= 2;
    }

    // Verify the doubled values
    printf("First value after doubling: %d\n", arr[0]);
    printf("Last value after doubling: %d\n", arr[SIZE - 1]);
    printf("Last index processed by thread: %d\n", i);

    return 0;
}


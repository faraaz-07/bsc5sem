#include <stdio.h>
#include <omp.h>

#define SIZE 1000000

int main() {
    int arr[SIZE];
    int i;

    // Parallelize array initialization using OpenMP
    #pragma omp parallel for lastprivate(i)
    for (i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }

    // Verify the initialization
    printf("First value: %d\n", arr[0]);
    printf("Last value initialized by thread: %d\n", i);

    return 0;
}


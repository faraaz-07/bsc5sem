#include <stdio.h>
#include <omp.h>

#define SIZE 1000000

int main() {
    int arr[SIZE];
    long long sum = 0;
    double average;
    int i;

    // Initialize array with values
    for (i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }

    double start_time = omp_get_wtime();

    #pragma omp parallel for reduction(+:sum)
    for (i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    average = (double)sum / SIZE;

    double end_time = omp_get_wtime();

    printf("Average: %f\n", average);
    printf("Execution time with OpenMP: %f seconds\n", end_time - start_time);

    return 0;
}


#include <stdio.h>
#include <omp.h>

int main() {
    int n = 1000000;
    double parallel_workload = 0.0, sequential_workload = 0.0;
    double array[n];

    // Initialize array
    for (int i = 0; i < n; i++) {
        array[i] = i * 0.5;
    }

    double start_time = omp_get_wtime();

    // Simulate 70% parallel workload
    #pragma omp parallel for reduction(+:parallel_workload)
    for (int i = 0; i < n * 0.7; i++) {
        parallel_workload += array[i];
    }

    // Simulate 30% sequential workload
    for (int i = n * 0.7; i < n; i++) {
        sequential_workload += array[i];
    }

    double end_time = omp_get_wtime();

    printf("Parallel workload result: %f\n", parallel_workload);
    printf("Sequential workload result: %f\n", sequential_workload);
    printf("Execution time: %f seconds\n", end_time - start_time);

    return 0;
}


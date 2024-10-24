#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#define SIZE 10000000

int main() {
   int* arr=(int*)malloc(SIZE*sizeof(int));
    long long sum = 0;
    int i,num;
    
    // Initialize array with values
    for (i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }
    double st=omp_get_wtime();
    //sequetial
    for (i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    double et=omp_get_wtime();
    sum=0;
    double start_time2 = omp_get_wtime();
    //parallel
    #pragma omp parallel 
	{
		 num=omp_get_num_threads();
	
	
	#pragma omp for reduction(+:sum)
    for (i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
}
   

    double end_time2 = omp_get_wtime();

    printf("Sum: %lld\n", sum);
    printf("Execution time sequentially: %f seconds\n", et-st);
    printf("Execution time with OpenMP: %f seconds\n", end_time2 - start_time2);
    printf("Speed Up: %f seconds\n", (et-st)/(end_time2 - start_time2));
    printf("Efficiency:%f\n",((et-st)/(end_time2 - start_time2))/num);
    return 0;
}



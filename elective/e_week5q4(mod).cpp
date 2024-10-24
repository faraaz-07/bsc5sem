
#include <stdio.h>
#include <omp.h>
# include <stdlib.h>
#define SIZE 1000000

int main() {
    int* arr=(int*)malloc(SIZE*sizeof(int));
    int i;
    int start_index=0,start_val;
    int last_index,last_value;
    printf("Enter the no of threads:");
   int n;
   scanf("%d",&n);

    //  array initialization 
    for (i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }
    #pragma omp parallel firstprivate(start_index,start_val) num_threads(n)
    {
    	
    	int thread_no=omp_get_thread_num();
    	int chunk_size=SIZE/n;
    	start_index=thread_no*chunk_size;
    	start_val=arr[start_index];
    
    	#pragma omp parallel for lastprivate(last_index,last_value)
    for (i = 0; i < SIZE; i++) {
        arr[i] *= 2;
        last_index=i;
        last_value=arr[i];
    }
    #pragma omp nowait
    	printf("\nthno : %d  chunk size : %d start index : %d  start value : %d last index :%d last value : %d",thread_no,chunk_size,start_index,start_val,last_index,last_value);
    	
	}
    

   
    return 0;
}


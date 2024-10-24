#include <stdio.h>
#include <omp.h>
# include <stdlib.h>
#define SIZE 1000000

int main() {
    int* arr=(int*)malloc(SIZE*sizeof(int));
    int i;
    int start_index=0;
    int last_val;
   int n;

    // Parallelize array initialization using OpenMP
    
    #pragma omp parallel firstprivate(start_index) num_threads(4)
    {
    	 n=omp_get_num_threads();
    	int thread_no=omp_get_thread_num();
    	int chunk_size=SIZE/n;
    	
    	start_index=thread_no*chunk_size;
    		
    	
    	
    	#pragma omp parallel for lastprivate(last_val) 
    	
    for (i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
        last_val=arr[i];
       
    }
    #pragma omp nowait
    printf("\nthno : %d  chunk size : %d start index : %d  last value : %d ",thread_no,chunk_size,start_index,(start_index+chunk_size));
	}
    


    return 0;
}


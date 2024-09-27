#include <stdio.h>
#include <omp.h>

int main() {
   	# pragma omp parallel for num_threads(100)
	
	
	for(int i=1;i<=100;i++)
	printf("Thread no : %d  ;  Hello world \n ",omp_get_thread_num());

	return 0;
}

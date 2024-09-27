#include <stdio.h>
#include <omp.h>

int main() {
	int i;
    #pragma omp parallel for private(i) num_threads(2)
   for(i=1;i<=10;i++)
   {
   	printf("%d\n",i);
   }
    return 0;
}

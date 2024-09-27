#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<omp.h>
int main() {
    int  i, max, min;
    srand(time(NULL));


    int arr[1000];
    for (i = 0; i < 999; i++) {
        arr[i]=rand();
    }

    for (i = 0; i <= 999; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    # pragma omp parallel for private(i)
    for(i=0;i<=999;i++)
    {
    	if(arr[i]>max)
    	max=arr[i];
    	if(arr[i]<min)
    	min=arr[i];
	}
    printf("\n\nThe maximum and minimum element in the array are %d and %d respectively.",max,min);

    return 0;
}

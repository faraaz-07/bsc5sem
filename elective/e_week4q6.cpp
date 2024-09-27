#include <stdio.h>
#include <omp.h>
int main() {
    int n, i, sum=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    #pragma omp parallel for private(i)
    for(i=0;i<n;i++)
    {
    	printf("The square of element %d in the array is %d.\n",i+1,arr[i]*arr[i]);
	}
	
    

    return 0;
}

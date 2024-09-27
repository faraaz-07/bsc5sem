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
    
    #pragma omp parallel for reduction(+:sum)
    for(i=0;i<n;i++)
    {
    	sum+=arr[i];
	}
	printf("The sum of all elements in the array is %d.",sum);
    

    return 0;
}

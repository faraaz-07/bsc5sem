#include <stdio.h>
#include <omp.h>
int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n],b[n],c[n];
    printf("Enter the elements in first array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements in second array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

  printf("First Array :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    
    printf("Second Array :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    #pragma omp parallel for 
    for(i=0;i<n;i++)
    {
    	c[i]=a[i]-b[i];
	}
	printf("\n");
	
	printf("Difference Array :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    

    return 0;
}

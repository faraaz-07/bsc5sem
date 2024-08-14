# include <stdio.h>
int main()
{   int n,i;
    printf("Enter size of the array.");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter values in the array.\n");
    for(i=0;i<n;i++){
                     printf("Enter value %d : ",i+1);
                     scanf("%d",&a[i]);
          
          }
          int small = a[0],large=a[0];
           for(i=1;i<n;i++){
                     if(small>a[i])
                     small=a[i];
                     if (large<a[i])
                     large=a[i];
          
          }
          printf("The smallest no and the largest no in the array are %d and %d respectively.",small,large);
          
    return 0;
}

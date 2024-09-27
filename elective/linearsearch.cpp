# include <stdio.h>
int main()
{   int n,i,val,flag=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter values in the array.\n");
    for(i=0;i<n;i++){
                     printf("Enter value %d : ",i+1);
                     scanf("%d",&a[i]);
          
          }
       printf("Enter the value for searching :");
       scanf("%d",&val);
           for(i=0;i<n;i++){
                     if(a[i]==val)
                     {
                     	flag=1;
                     	break;
					 }
          }
          if(flag==0)
          printf("The entered value is not present in the array.");
          else
          printf("The entered value %d is present at the position %d in the array.",val,i+1);
    return 0;
}

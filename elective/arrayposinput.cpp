# include <stdio.h>
int main()
{   int n,i,pos,val;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the position for entry:");
    scanf("%d",&pos);
    printf("Enter the value for entry:");
    scanf("%d",&val);
     for(i=0;i<n;i++){
     	if(i==pos-1)
                     a[i]=val;
                     else
                     a[i]=0;
          
          }
    
    for(i=0;i<n;i++){
                     printf("%d  ",a[i]);
          
          }
    return 0;
}

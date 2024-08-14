#include <stdio.h>
int main()
{  int r1,r2,i,j,count=1;
    printf("Enter the range to find prime numbers in between.\n");
    printf("Lower range : ");
    scanf("%d",&r1);
    printf("\nUpper range : ");
    scanf("%d",&r2);
    for(i=r1;i<=r2;i++)
    {
                       count = 1;
                       if(i<=1)
                       count = 0;
                       for(j=2;j<=i/2;j++)
                       {
                                        if(i%j==0)
                                        count=0;
                                        }
                                        if(count==1)
                                        printf("%d\n",i);
          }
    return 0;
}

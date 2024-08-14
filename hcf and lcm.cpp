# include <stdio.h>
int max(int x,int y)
{
    if(x>y)
    return x;
    else 
    return y;
    }
int main()
{   int n1,n2,i,lcm=1;
    printf("Enter two numbers to find their hcf and lcm.");
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=1;i<=max(n1,n2);i++)
    {
      if(n1%i==0&&n2%i==0)
      lcm = i;                        
                              }
      printf("The lcm and hcf of numbers %d and %d are %d and %d respectively.",n1,n2,lcm,n1*n2/lcm);
    return 0;
    }

# include <stdio.h>
# include <omp.h>

int main()
{
	int n,i;
    int fac=1;
	printf("Enter a number to find its factorial.\n");
	scanf("%d",&n);
	#pragma omp parallel for reduction(*:fac)
	for(i=2;i<=n;i++)
	{
		fac*=i;
	}
	printf("The factorial of the entered number:%d",fac);
	return 0;
}

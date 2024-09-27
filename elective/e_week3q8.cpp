# include <stdio.h>
int main()
{
	int n,fac=1;
	printf("Enter a number to find its factorial.\n");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		fac*=i;
	}
	printf("The factorial of the entered number:%d",fac);
	return 0;
}

#include <stdio.h>

int main()
{    int a=0;int num;
	printf("Enter Number to check pallindrome :");
	 scanf("%d",&num);
	printf("the input number is : %d\n", num);
	int n=num;
	while(n>0)
	{
		a=n%10+(a*10);
		n=n/10;
	}
	if(a==num)
	printf("number is pallindrome.");
	else
	printf("number is not pallindrome.");
	return 0;
}

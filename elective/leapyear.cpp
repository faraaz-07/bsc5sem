# include <stdio.h>
int main()
{
	int year;
	printf("Enter a year to check whether it is leap: ");
	scanf("%d",&year);
	if(year%4==0&&((year%100!=0)||(year%400==0)))
	printf("Year %d is a leap year.",year);
	else
	printf("Year %d is a not leap year.",year);
	return 0;
}

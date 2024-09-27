#include <stdio.h>
#include <math.h>
int main()
{
	double p,r,t,n;
	printf("Enter the principal amount :");
	scanf("%lf",&p);
	printf("Enter the norminal rate of interest :");
	scanf("%lf",&r);
	printf("Enter the no. of years :");
	scanf("%lf",&t);
	printf("Enter the no. of periods in a year :");
	scanf("%lf",&n);
	double si = p*r*t/100;
	double ci = (p*pow((1+r/100),n*t))-p;
	printf("The simple interest is : %lf\n",si);
    printf("The compound interest is : %lf",ci);
}

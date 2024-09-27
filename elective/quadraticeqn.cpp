# include <stdio.h>
# include <math.h>
int main()
{
	int a,b,c;
	printf("Enter the coefficients of x^2:");
	scanf("%d",&a);
	printf("Enter the coefficients of x:");
	scanf("%d",&b);
	printf("Enter the coefficients of constant:");
	scanf("%d",&c);
	printf("The discriminant of the above equation : %lf",sqrt(b*b-4*a*c));
	double x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	double x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	printf("\nThe roots of the equation %dx^2+%dx+%d are %lf and %lf.",a,b,c,x1,x2);
	return 0;
}

#include <stdio.h>
#include <omp.h>
 int main(){
 int n;
 printf("Enter the limit to print fibonacci series:");
 scanf("%d",&n);
int a=0,b=1,c=0,i;

#pragma omp parallel for private(i)


for(i=1;i<=n;i++)
{
	if(i==1)
	printf("0 ");
	else if(i==2)
	printf("1 ");
	else{
	
	#pragma omp critical
	{
	
	c=a+b;
	a=b;
	b=c;

	printf("%d ",c);
}
}
}
return 0;
}

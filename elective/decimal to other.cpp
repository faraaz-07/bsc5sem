# include <stdio.h>
void div(int num,int divi)
{
	int a[100],i=0,rem,j;
	while(num!=0)
	{
		rem=num%divi;
		
		a[i]=rem;
	
		num=num/divi;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		if(a[j]==10)
		printf("A");
		else if(a[j]==11)
		printf("B");
		else if(a[j]==12)
		printf("C");
		else if(a[j]==13)
		printf("D");
		else if(a[j]==14)
		printf("E");
		else if(a[j]==15)
		printf("F");
		else
		printf("%d",a[j]);
	}
}
int main()
{
	int num;
	printf("Enter the decimal no to convert: ");
	scanf("%d",&num);
	printf("Binary no : ");
	div(num,2);
		printf("\nOctal no : ");
	div(num,8);
		printf("\nHexa Deciaml no : ");
	div(num,16);
}

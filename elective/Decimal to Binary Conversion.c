#include<stdio.h>
#include<string.h>
int main()
{	
	int decimal, i=0, n=0, arr[100];
	
	printf("Enter the decimal no. : ");
	scanf("%d", &decimal);
	
	while(decimal > 0){
		arr[i] = decimal % 2;
		decimal /= 2;
		i++;
		n++;
	}
	int j;
	
	for(j = n - 1; j >= 0; j--){
		printf("%d", arr[j]);
	}
}

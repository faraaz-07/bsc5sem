#include <stdio.h>
#include <omp.h>
#include <math.h>
int noofdigits(int num)
{
	int c=0;
	while(num!=0)
	{
		num/=10;
		c++;
	}
	return c;
}
int isArmstrong(int num) {
    int original = num, sum = 0, digit;
    int n=noofdigits(num);
    while (num != 0) {
        digit = num % 10;
        sum += pow(digit,n);
        num /= 10;
    }

    return sum == original;
}


int main() {
    int arr[20];

    printf("Enter 20 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    #pragma omp parallel for
    for (int i = 0; i < 5; i++) {
        if (isArmstrong(arr[i]))
            printf("%d is an Armstrong number.\n", arr[i]);
        else
            printf("%d is not an Armstrong number.\n", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int isPerfect(int num) {
    int sum=0;
    for(int i=1;i<num;i++)
    {
    	if(num%i==0)
    	sum+=i;
	}

    return sum == num;
}

int main() {
    int arr[20];

    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (isPerfect(arr[i]))
            printf("%d is an Perfect number.\n", arr[i]);
        else
            printf("%d is not an Perfect number.\n", arr[i]);
    }

    return 0;
}

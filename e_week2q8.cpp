#include <stdio.h>
#include <omp.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digit;

    while (num != 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return sum == original;
}

int main() {
    int arr[20];

    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    #pragma omp parallel for
    for (int i = 0; i < 20; i++) {
        if (isArmstrong(arr[i]))
            printf("%d is an Armstrong number.\n", arr[i]);
        else
            printf("%d is not an Armstrong number.\n", arr[i]);
    }

    return 0;
}

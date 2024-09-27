#include <stdio.h>

int main() {
    int arr[20];

    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (arr[i] % 2 == 0)
            printf("%d is even.\n", arr[i]);
        else
            printf("%d is odd.\n", arr[i]);
    }

    return 0;
}

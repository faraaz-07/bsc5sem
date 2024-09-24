#include <stdio.h>

int main() {
    int N1, N2, i;

    printf("Enter size of first array: ");
    scanf("%d", &N1);

    int arr1[N1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < N1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &N2);

    int arr2[N2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < N2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[N1 + N2];
    for (i = 0; i < N1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < N2; i++) {
        merged[N1 + i] = arr2[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < N1 + N2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, sum = 0, expectedSum = 0;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d distinct numbers from 0 to %d (one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Sum of elements in the array
    }

    // Expected sum of numbers from 0 to n
    expectedSum = (n * (n + 1)) / 2;

    printf("The missing number is: %d\n", expectedSum - sum);

    return 0;
}


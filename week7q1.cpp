#include <stdio.h>

int main() {
    int n, i, largest, secondLargest;

    // Input the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    largest = secondLargest = a[0];  

    // Find the largest and second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == a[0])
        printf("No second largest element.\n");
    else
        printf("The second largest element is %d\n", secondLargest);

    return 0;
}

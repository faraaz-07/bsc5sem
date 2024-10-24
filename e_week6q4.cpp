#include <stdio.h>

int main() {
    int n = 1000000;
    int array[n];
    int count = 0;
    int target = 7;

    // Initialize the array with some values
    for (int i = 0; i < n; i++) {
        array[i] = i % 10;  // Example values: 0, 1, 2, ..., 9
    }

    // Count occurrences of the target value
    for (int i = 0; i < n; i++) {
        if (array[i] == target) {
            count++;
        }
    }

    printf("Count of %d: %d\n", target, count);
    return 0;
}


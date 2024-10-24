#include <stdio.h>

int main() {
    int allocation[5][3] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
    int max[5][3] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
    int available[3] = {3, 3, 2};
    int need[5][3], finish[5] = {0}, safeSequence[5], count = 0;

    // Calculate the need matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    // Check for deadlock conditions (safe sequence)
    while (count < 5) {
        int found = 0;
        for (int i = 0; i < 5; i++) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < 3; j++) {
                    if (need[i][j] > available[j])
                        break;
                }

                if (j == 3) {
                    for (int k = 0; k < 3; k++)
                        available[k] += allocation[i][k];
                    safeSequence[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if (!found) {
            printf("The system is in deadlock.\n");
            return 0;
        }
    }

    printf("System is in a safe state.\nSafe Sequence: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", safeSequence[i]);
    printf("\n");

    return 0;
}


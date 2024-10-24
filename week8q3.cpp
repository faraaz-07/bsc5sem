#include <stdio.h>

int main() {
    int n, r, i, j, k;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the number of resource types: ");
    scanf("%d", &r);

    int allocation[n][r], max[n][r], available[r], need[n][r];
    int finish[n], safeSeq[n], work[r], count = 0;

    printf("Enter the Allocation matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &allocation[i][j]);
        }
    }

    printf("Enter the Maximum matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    printf("Enter the Available resources:\n");
    for (i = 0; i < r; i++) {
        scanf("%d", &available[i]);
        work[i] = available[i];
    }

    // Calculate Need matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < r; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        finish[i] = 0;
    }

    // Banker's Algorithm logic
    while (count < n) {
        int found = 0;
        for (i = 0; i < n; i++) {
            if (finish[i] == 0) {
                for (j = 0; j < r; j++) {
                    if (need[i][j] > work[j])
                        break;
                }
                if (j == r) {
                    for (k = 0; k < r; k++) {
                        work[k] += allocation[i][k];
                    }
                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if (found == 0) {
            printf("The system is in an unsafe state.\n");
            return 0;
        }
    }

    printf("The system is in a safe state.\nSafe sequence: ");
    for (i = 0; i < n; i++) {
        printf("%d ", safeSeq[i]);
    }
    printf("\n");

    return 0;
}


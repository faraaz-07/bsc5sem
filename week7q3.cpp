#include <stdio.h>

struct Process {
    int id;
    int burstTime;
    int priority;
    int waitingTime;
    int turnaroundTime;
};

void sortProcessesByPriority(struct Process p[], int n) {
    int i, j;
    struct Process temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (p[j].priority > p[j + 1].priority) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    // Input burst time and priority for each process
    for (i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        p[i].id = i + 1;
        printf("Burst Time: ");
        scanf("%d", &p[i].burstTime);
        printf("Priority (lower value = higher priority): ");
        scanf("%d", &p[i].priority);
    }

    // Sort processes by priority
    sortProcessesByPriority(p, n);

    // Calculate waiting time and turnaround time
    p[0].waitingTime = 0;
    p[0].turnaroundTime = p[0].burstTime;

    for (i = 1; i < n; i++) {
        p[i].waitingTime = p[i - 1].waitingTime + p[i - 1].burstTime;
        p[i].turnaroundTime = p[i].waitingTime + p[i].burstTime;
    }

    // Display process details
    printf("\nProcess ID\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].id, p[i].burstTime, p[i].priority, p[i].waitingTime, p[i].turnaroundTime);
    }

    return 0;
}

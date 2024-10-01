#include <stdio.h>

int main() {
    int n, i, timeQuantum, totalTime = 0;
    int remainingTime[10],w_time[10],ta_time[10], waitTime = 0, turnaroundTime = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int burstTime[n], process[n];

    // Input burst time of each process
    printf("Enter burst time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
        remainingTime[i] = burstTime[i];
        process[i] = i + 1;
    }

    printf("Enter time quantum: ");
    scanf("%d", &timeQuantum);

    // Round-Robin scheduling logic
    int currentTime = 0, completed = 0;

    while (completed < n) {
        for (i = 0; i < n; i++) {
            if (remainingTime[i] > 0) {
                if (remainingTime[i] > timeQuantum) {
                    currentTime += timeQuantum;
                    remainingTime[i] -= timeQuantum;
                } else {
                    currentTime += remainingTime[i];
                    w_time[i]=currentTime - burstTime[i];
                    remainingTime[i] = 0;
                    completed++;
                }
            }
        }
    }

    // Calculate average times
    for (i = 0; i < n; i++) {
    	ta_time[i]=w_time[i]+burstTime[i];
        turnaroundTime += ta_time[i];
        waitTime+=w_time[i];
        
    }
 printf("\nProcess ID\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", process[i], burstTime[i],  w_time[i], ta_time[i]);
    }
    printf("Average waiting time = %.2f\n", (float)waitTime / n);
    printf("Average turnaround time = %.2f\n", (float)turnaroundTime / n);

    return 0;
}
                   

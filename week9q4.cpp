#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define TASK_NAME_LENGTH 50

// Define a struct to represent a task
typedef struct {
    char name[TASK_NAME_LENGTH];
    int isCompleted;
} Task;

// Global array of tasks and a counter for the number of tasks
Task tasks[MAX_TASKS];
int taskCount = 0;

// Function to add a new task
void addTask() {
    if (taskCount < MAX_TASKS) {
        printf("Enter task name: ");
        scanf(" %[^\n]", tasks[taskCount].name);
        tasks[taskCount].isCompleted = 0; // Task is initially not completed
        taskCount++;
        printf("Task added successfully!\n");
    } else {
        printf("Task limit reached. Cannot add more tasks.\n");
    }
}

// Function to view all tasks
void viewTasks() {
    if (taskCount == 0) {
        printf("No tasks available.\n");
        return;
    }

    printf("\nList of Tasks:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. [%s] %s\n", i + 1, tasks[i].isCompleted ? "X" : " ", tasks[i].name);
    }
    printf("\n");
}

// Function to delete a task
void deleteTask() {
    int taskNumber;
    viewTasks();

    if (taskCount == 0) {
        return; // No tasks to delete
    }

    printf("Enter the task number to delete: ");
    scanf("%d", &taskNumber);

    if (taskNumber < 1 || taskNumber > taskCount) {
        printf("Invalid task number.\n");
        return;
    }

    // Shift tasks down to remove the selected task
    for (int i = taskNumber - 1; i < taskCount - 1; i++) {
        tasks[i] = tasks[i + 1]; // Move the next task up
    }
    taskCount--;
    printf("Task deleted successfully!\n");
}

// Function to mark a task as completed
void markTaskCompleted() {
    int taskNumber;
    viewTasks();

    if (taskCount == 0) {
        return; // No tasks to mark
    }

    printf("Enter the task number to mark as completed: ");
    scanf("%d", &taskNumber);

    if (taskNumber < 1 || taskNumber > taskCount) {
        printf("Invalid task number.\n");
        return;
    }

    tasks[taskNumber - 1].isCompleted = 1; // Mark task as completed
    printf("Task marked as completed!\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\nSimple Task Management System\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Mark Task Completed\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                markTaskCompleted();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


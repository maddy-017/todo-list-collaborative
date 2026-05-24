#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_LENGTH 200

struct Task {
    char description[MAX_LENGTH];
    int completed;
};

void viewTasks(struct Task tasks[], int count);

void markTaskDone(struct Task tasks[], int count) {
    if(count == 0) {
        printf("\nNo tasks available!\n");
        return;
    }

    viewTasks(tasks, count);

    int taskNum;
    printf("\nEnter task number to mark as done: ");
    scanf("%d", &taskNum);

    if(taskNum < 1 || taskNum > count) {
        printf("\nInvalid task number!\n");
        return;
    }

    if(tasks[taskNum - 1].completed == 1) {
        printf("\nThis task is already completed!\n");
        return;
    }

    tasks[taskNum - 1].completed = 1;
    printf("\n*** TASK DONE ***\n");
    printf("Task '%s' marked as completed!\n", tasks[taskNum - 1].description);
}

void deleteTask(struct Task tasks[], int *count) {
    if(*count == 0) {
        printf("\nNo tasks available!\n");
        return;
    }

    viewTasks(tasks, *count);

    int taskNum;
    printf("\nEnter task number to delete: ");
    scanf("%d", &taskNum);

    if(taskNum < 1 || taskNum > *count) {
        printf("\nInvalid task number!\n");
        return;
    }

    printf("\nTask '%s' deleted successfully!\n", tasks[taskNum - 1].description);

    for(int i = taskNum - 1; i < *count - 1; i++) {
        tasks[i] = tasks[i + 1];
    }

    (*count)--;
}

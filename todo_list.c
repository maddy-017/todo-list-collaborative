#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_LENGTH 200

struct Task {
    char description[MAX_LENGTH];
    int completed;
};

void viewTasks(struct Task tasks[], int count) {
    if(count == 0) {
        printf("\nNo tasks available!\n");
        return;
    }

    printf("\n========================================\n");
    printf("           YOUR TO-DO LIST\n");
    printf("========================================\n");

    for(int i = 0; i < count; i++) {
        printf("%d. ", i + 1);
        if(tasks[i].completed == 1) {
            printf("[DONE] %s\n", tasks[i].description);
        } else {
            printf("[    ] %s\n", tasks[i].description);
        }
    }
    printf("========================================\n");
}

void addTask(struct Task tasks[], int *count) {
    if(*count >= MAX_TASKS) {
        printf("\nTask list is full!\n");
        return;
    }

    printf("\nEnter task description: ");
    fgets(tasks[*count].description, MAX_LENGTH, stdin);

    int len = strlen(tasks[*count].description);
    if(len > 0 && tasks[*count].description[len-1] == '\n') {
        tasks[*count].description[len-1] = '\0';
    }

    tasks[*count].completed = 0;
    (*count)++;

    printf("\nTask added successfully!\n");
}

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

int main() {
    struct Task tasks[MAX_TASKS];
    int count = 0;
    int choice;

    printf("\n========================================\n");
    printf("      WELCOME TO TO-DO LIST MANAGER\n");
    printf("========================================\n");

    while(1) {
        printf("\n--- MENU ---\n");
        printf("1. Add Task\n");
        printf("2. View All Tasks\n");
        printf("3. Mark Task as Done\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addTask(tasks, &count); break;
            case 2: viewTasks(tasks, count); break;
            case 3: markTaskDone(tasks, count); break;
            case 4: deleteTask(tasks, &count); break;
            case 5:
                printf("\nGoodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice!\n");
        }
    }
}

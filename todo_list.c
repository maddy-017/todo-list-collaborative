#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100

char tasks[MAX_TASKS][200];
int count = 0;

void addTask() {
    printf("Enter task: ");
    fgets(tasks[count], 200, stdin);
    count++;
    printf("Task added!\n");
}

void viewTasks() {
    if(count == 0) {
        printf("No tasks!\n");
        return;
    }
    for(int i = 0; i < count; i++) {
        printf("%d. %s", i + 1, tasks[i]);
    }
}

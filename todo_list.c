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

void deleteTask() {
    viewTasks();
    int num;
    printf("Enter task number to delete: ");
    scanf("%d", &num);
    getchar();
    for(int i = num - 1; i < count - 1; i++) {
        strcpy(tasks[i], tasks[i + 1]);
    }
    count--;
    printf("Task deleted!\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();
        switch(choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: deleteTask(); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

/*
 * MAIN PROGRAM: To-Do List Manager
 * Integrates modules from both contributors
 */

#include <stdio.h>
#include "todo.h"

int main() {
    struct Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;
    
    printf("\n========================================\n");
    printf("     WELCOME TO TO-DO LIST MANAGER\n");
    printf("========================================\n");
    printf("   Collaborative Project by 2 Developers\n");
    printf("========================================\n");
    
    while(1) {
        printf("\n--- MENU ---\n");
        printf("1. Add Task (Module by Person 1)\n");
        printf("2. View All Tasks (Module by Person 1)\n");
        printf("3. Mark Task as Done (Module by Person 2)\n");
        printf("4. Delete Task (Module by Person 2)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from buffer
        
        switch(choice) {
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                viewTasks(tasks, taskCount);
                break;
            case 3:
                markTaskDone(tasks, taskCount);
                break;
            case 4:
                deleteTask(tasks, &taskCount);
                break;
            case 5:
                printf("\nThank you for using To-Do List Manager!\n");
                printf("Developed collaboratively by 2 developers\n");
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    
    return 0;
}

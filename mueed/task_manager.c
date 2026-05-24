/*
 * PERSON 1 MODULE: Task Manager
 * Responsible for: Adding tasks and Viewing tasks
 * Author: [Your Name]
 */

#include <stdio.h>
#include <string.h>
#include "todo.h"

// Function to add a new task
void addTask(struct Task tasks[], int *count) {
    if(*count >= MAX_TASKS) {
        printf("\nTask list is full! Cannot add more tasks.\n");
        return;
    }
    
    printf("\nEnter task description: ");
    fgets(tasks[*count].description, MAX_LENGTH, stdin);
    
    // Remove newline character if present
    int len = strlen(tasks[*count].description);
    if(len > 0 && tasks[*count].description[len-1] == '\n') {
        tasks[*count].description[len-1] = '\0';
    }
    
    tasks[*count].completed = 0;
    (*count)++;
    
    printf("\nTask added successfully!\n");
}

// Function to view all tasks
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
            printf("[ ] %s\n", tasks[i].description);
        }
    }
    printf("========================================\n");
}

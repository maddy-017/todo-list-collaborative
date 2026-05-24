#ifndef TODO_H
#define TODO_H

#define MAX_TASKS 50
#define MAX_LENGTH 100

// Structure to store task information
struct Task {
    char description[MAX_LENGTH];
    int completed;
};

// Function declarations for Person 1 (Task Management)
void addTask(struct Task tasks[], int *count);
void viewTasks(struct Task tasks[], int count);

// Function declarations for Person 2 (Task Operations)
void markTaskDone(struct Task tasks[], int count);
void deleteTask(struct Task tasks[], int *count);

#endif

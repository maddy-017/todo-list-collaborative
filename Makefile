# Makefile for To-Do List Collaborative Project

CC = gcc
CFLAGS = -Wall -I.
TARGET = todo_list

# Source files
PERSON1_SRC = person1/task_manager.c
PERSON2_SRC = person2/task_operations.c
MAIN_SRC = main.c

# Object files
PERSON1_OBJ = person1/task_manager.o
PERSON2_OBJ = person2/task_operations.o
MAIN_OBJ = main.o

# Build target
all: $(TARGET)

$(TARGET): $(MAIN_OBJ) $(PERSON1_OBJ) $(PERSON2_OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(MAIN_OBJ) $(PERSON1_OBJ) $(PERSON2_OBJ)
	@echo "Build successful! Run with ./todo_list"

# Compile main
$(MAIN_OBJ): $(MAIN_SRC) todo.h
	$(CC) $(CFLAGS) -c $(MAIN_SRC)

# Compile Person 1's module
$(PERSON1_OBJ): $(PERSON1_SRC) todo.h
	$(CC) $(CFLAGS) -c $(PERSON1_SRC) -o $(PERSON1_OBJ)

# Compile Person 2's module
$(PERSON2_OBJ): $(PERSON2_SRC) todo.h
	$(CC) $(CFLAGS) -c $(PERSON2_SRC) -o $(PERSON2_OBJ)

# Clean build files
clean:
	rm -f $(TARGET) $(MAIN_OBJ) $(PERSON1_OBJ) $(PERSON2_OBJ)
	@echo "Clean complete!"

# Run the program
run: $(TARGET)
	./$(TARGET)

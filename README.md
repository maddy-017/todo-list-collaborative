# 📝 To-Do List Manager - Collaborative C Project

A simple command-line to-do list application built collaboratively by 2 developers.

## 👥 Team Structure

### Person 1 - Task Manager Module
**Responsibilities:**
- ✅ Add Task functionality
- ✅ View Tasks functionality
- 📁 File: `person1/task_manager.c`

### Person 2 - Task Operations Module
**Responsibilities:**
- ✅ Mark Task as Done functionality
- ✅ Delete Task functionality
- 📁 File: `person2/task_operations.c`

## 📂 Project Structure

```
todo_collaboration/
├── main.c                          # Main program (integrates both modules)
├── todo.h                          # Header file (shared definitions)
├── person1/
│   └── task_manager.c             # Person 1's module
├── person2/
│   └── task_operations.c          # Person 2's module
├── Makefile                        # Build automation
├── .gitignore                      # Git ignore rules
└── README.md                       # This file
```

## 🚀 How to Build and Run

### Method 1: Using Makefile (Recommended)
```bash
# Build the project
make

# Run the program
make run

# Clean build files
make clean
```

### Method 2: Manual Compilation
```bash
gcc -Wall -I. -c main.c
gcc -Wall -I. -c person1/task_manager.c -o person1/task_manager.o
gcc -Wall -I. -c person2/task_operations.c -o person2/task_operations.o
gcc -Wall -I. -o todo_list main.o person1/task_manager.o person2/task_operations.o
./todo_list
```

## ✨ Features

1. **Add Task** - Create a new task (Person 1's module)
2. **View All Tasks** - Display all tasks with status (Person 1's module)
3. **Mark Task as Done** - Complete a task and see "TASK DONE" message (Person 2's module)
4. **Delete Task** - Remove a task from the list (Person 2's module)
5. **Exit** - Close the program

## 🤝 Collaboration Workflow

### For Person 1:
1. Fork/Clone the repository
2. Work on `person1/task_manager.c`
3. Implement Add and View functions
4. Test your module
5. Commit and push your changes
6. Create a Pull Request

### For Person 2:
1. Fork/Clone the repository
2. Work on `person2/task_operations.c`
3. Implement Mark Done and Delete functions
4. Test your module
5. Commit and push your changes
6. Create a Pull Request

## 📋 Git Commands for Collaboration

### Initial Setup (Person 1 - Repository Owner)
```bash
cd todo_collaboration
git init
git add .
git commit -m "Initial commit: Project structure"
git branch -M main
git remote add origin YOUR_GITHUB_REPO_URL
git push -u origin main
```

### For Person 2 (Collaborator)
```bash
# Clone the repository
git clone YOUR_FRIEND_REPO_URL
cd todo_collaboration

# Create a new branch for your work
git checkout -b person2-module

# After making changes
git add person2/task_operations.c
git commit -m "Add: Task operations module (mark done & delete)"
git push origin person2-module

# Then create a Pull Request on GitHub
```

### For Both: Staying Updated
```bash
git pull origin main
```

## 🎯 Division of Work

| Feature | Assigned To | File | Status |
|---------|-------------|------|--------|
| Add Task | Person 1 | task_manager.c | ✅ |
| View Tasks | Person 1 | task_manager.c | ✅ |
| Mark Done | Person 2 | task_operations.c | ✅ |
| Delete Task | Person 2 | task_operations.c | ✅ |
| Main Integration | Both | main.c | ✅ |

## 🧪 Testing Your Module

### Person 1 Testing:
- Test adding multiple tasks
- Test viewing empty list
- Test viewing list with tasks
- Test task list limits (50 tasks max)

### Person 2 Testing:
- Test marking tasks as done
- Test deleting tasks
- Test with invalid task numbers
- Test with empty list

## 📝 Code Guidelines

- Use clear variable names
- Add comments for complex logic
- Follow the existing code style
- Test before committing
- Update README if you add features

## 🐛 Common Issues

**Issue:** "Command not found: make"
**Solution:** Use manual compilation method

**Issue:** "Permission denied"
**Solution:** `chmod +x todo_list`

**Issue:** Merge conflicts
**Solution:** Communicate with your partner, pull latest changes before working

## 📄 License

Free to use for educational purposes.

## 👨‍💻 Contributors

- Person 1: [Your Name] - Task Management Module
- Person 2: [Friend's Name] - Task Operations Module

---

**Happy Coding! 🚀**

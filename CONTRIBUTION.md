# 🤝 CONTRIBUTION GUIDE

## 📋 Work Division

### PERSON 1 (You) - Responsible For:
- ✅ `person1/task_manager.c`
  - `addTask()` function
  - `viewTasks()` function
- ✅ Testing your module independently
- ✅ Creating and maintaining the repository
- ✅ Adding collaborator access

### PERSON 2 (Friend) - Responsible For:
- ✅ `person2/task_operations.c`
  - `markTaskDone()` function
  - `deleteTask()` function
- ✅ Testing your module independently
- ✅ Creating pull requests
- ✅ Accepting collaborator invitation

### SHARED Responsibilities:
- ✅ `todo.h` - Both can suggest improvements
- ✅ `main.c` - Both review integration
- ✅ `README.md` - Both update when needed
- ✅ Testing the complete program together

---

## 🎯 Workflow for Each Person

### Daily Workflow

```bash
# 1. ALWAYS start by pulling latest changes
git pull origin main

# 2. Check what branch you're on
git branch

# 3. Work on YOUR assigned files only
# Person 1: person1/task_manager.c
# Person 2: person2/task_operations.c

# 4. Test your changes
make clean
make
./todo_list

# 5. Add your changes
git add person1/task_manager.c    # Person 1
git add person2/task_operations.c # Person 2

# 6. Commit with clear message
git commit -m "Fix: Bug in addTask function"

# 7. Pull again (in case partner pushed)
git pull origin main

# 8. Push your changes
git push origin main
```

---

## 📝 Commit Message Examples

### Good Commit Messages:
```
✅ "Add: Input validation in addTask()"
✅ "Fix: Segmentation fault in deleteTask()"
✅ "Update: Improved error messages in viewTasks()"
✅ "Refactor: Simplified markTaskDone() logic"
✅ "Docs: Updated README with new features"
```

### Bad Commit Messages:
```
❌ "fixed stuff"
❌ "update"
❌ "asdfghj"
❌ "changes"
❌ "done"
```

---

## 🧪 Testing Guidelines

### Person 1 Should Test:
1. Adding tasks with different lengths
2. Adding maximum tasks (50)
3. Viewing empty task list
4. Viewing task list with multiple tasks
5. Special characters in task descriptions

### Person 2 Should Test:
1. Marking tasks as done (valid and invalid numbers)
2. Deleting tasks (valid and invalid numbers)
3. Trying to mark already completed tasks
4. Operating on empty task list
5. Edge cases (first task, last task, middle task)

### Both Should Test Together:
1. Complete workflow: Add → View → Mark Done → View → Delete
2. Multiple operations in sequence
3. Stress testing (many tasks, rapid operations)

---

## 🚫 What NOT to Do

### DON'T:
- ❌ Edit your partner's files (person1 ↔ person2)
- ❌ Push without testing
- ❌ Force push (`git push -f`) - Very dangerous!
- ❌ Delete files without asking
- ❌ Change the file structure without discussion
- ❌ Commit compiled files (.o, todo_list) - Use .gitignore
- ❌ Work directly on main without pulling first

### DO:
- ✅ Communicate before major changes
- ✅ Pull before you push
- ✅ Test before you commit
- ✅ Ask questions if unsure
- ✅ Review each other's code
- ✅ Keep commits small and focused

---

## 🔄 Collaboration Scenarios

### Scenario 1: Both Working at Same Time
**Person 1:**
```bash
git pull origin main
# Work on person1 files
git add person1/task_manager.c
git commit -m "Add: Better input validation"
git pull origin main  # Check for partner's changes
git push origin main
```

**Person 2:** (5 minutes later)
```bash
git pull origin main  # Gets Person 1's changes
# Work on person2 files
git add person2/task_operations.c
git commit -m "Fix: Delete task bug"
git pull origin main  # Double check
git push origin main
```

### Scenario 2: Merge Conflict
If both edit the same file (like README.md):

```bash
git pull origin main
# CONFLICT in README.md
# Git shows: 
# <<<<<<< HEAD
# Your changes
# =======
# Partner's changes
# >>>>>>> 

# Open README.md
# Decide which to keep (or merge both)
# Remove the conflict markers (<<<<, ====, >>>>)

git add README.md
git commit -m "Resolve: Merge conflict in README"
git push origin main
```

### Scenario 3: Want to Suggest Changes to Partner's Code
1. Don't edit directly
2. Create an issue on GitHub OR
3. Tell them in person/message
4. They make the change
5. Or use Pull Request workflow

---

## 💡 Best Practices

### Communication
- 📱 Message before starting work: "Working on addTask() now"
- 📱 Message after pushing: "Pushed changes to addTask, please pull"
- 📱 Coordinate working hours to avoid conflicts

### Code Quality
- Use meaningful variable names
- Add comments for complex logic
- Follow the existing code style
- Keep functions focused (one task per function)

### Git Habits
- Pull at least once before starting work
- Commit often (small, logical changes)
- Write descriptive commit messages
- Never commit broken code
- Test before pushing

---

## 📊 Progress Tracking

Create a simple checklist (can put in README or separate file):

### Person 1 Tasks:
- [x] Basic addTask() implementation
- [x] Input validation in addTask()
- [x] Basic viewTasks() implementation
- [ ] Color coding for completed tasks (optional)
- [ ] Search tasks feature (optional)

### Person 2 Tasks:
- [x] Basic markTaskDone() implementation
- [x] Basic deleteTask() implementation
- [ ] Confirmation before deleting (optional)
- [ ] Undo last action (optional)
- [ ] Edit task feature (optional)

---

## 🆘 Need Help?

### Git Issues:
1. Check Git documentation: https://git-scm.com/doc
2. Ask your partner
3. Search on Stack Overflow
4. Use `git status` to see current state

### Code Issues:
1. Use `gcc -Wall` for warnings
2. Add printf debugging
3. Test incrementally
4. Review each other's code
5. Use online C reference: https://en.cppreference.com/w/c

---

## 🎉 Completion Checklist

Before considering project done:

- [ ] All features implemented and tested
- [ ] No compiler warnings
- [ ] Code is commented
- [ ] README is complete
- [ ] Both contributors credited
- [ ] GITHUB_SETUP.md verified
- [ ] .gitignore working (no .o files in repo)
- [ ] Makefile works on both computers
- [ ] Screenshots/demo added to README (optional)

---

**Happy Collaborating! 🚀**

Remember: Communication is key! Talk to each other, and don't be afraid to ask questions.

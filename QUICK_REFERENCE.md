# 🚀 QUICK REFERENCE CARD

Print this out or keep it handy!

---

## 📥 FIRST TIME SETUP

### Person 1 (Create & Upload):
```bash
cd todo_collaboration
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin YOUR_GITHUB_URL
git push -u origin main
```

### Person 2 (Clone & Start):
```bash
git clone REPO_URL
cd todo-list-collaborative
```

---

## 🔄 DAILY WORKFLOW

```bash
# STEP 1: Get latest code
git pull origin main

# STEP 2: Make your changes
# Edit your files only!

# STEP 3: Build and test
make clean
make
./todo_list

# STEP 4: Save your work
git add .
git commit -m "Your message"

# STEP 5: Push to GitHub
git pull origin main    # Pull again!
git push origin main
```

---

## 📋 ESSENTIAL COMMANDS

| Command | What it does |
|---------|-------------|
| `git status` | Check what changed |
| `git pull origin main` | Get latest code |
| `git add .` | Stage all changes |
| `git add file.c` | Stage specific file |
| `git commit -m "msg"` | Save changes |
| `git push origin main` | Upload to GitHub |
| `git log` | See history |
| `git branch` | Check current branch |

---

## 🏗️ BUILD COMMANDS

| Command | What it does |
|---------|-------------|
| `make` | Build project |
| `make run` | Build & run |
| `make clean` | Remove build files |
| `./todo_list` | Run program |

---

## 📁 FILE OWNERSHIP

**PERSON 1:**
- ✅ `person1/task_manager.c`
- ✅ Test Add & View

**PERSON 2:**
- ✅ `person2/task_operations.c`
- ✅ Test Mark Done & Delete

**SHARED:**
- `main.c`, `todo.h`, `README.md`

---

## ⚠️ GOLDEN RULES

1. **ALWAYS** pull before you push
2. **NEVER** force push (`-f`)
3. **TEST** before committing
4. **COMMUNICATE** with partner
5. **COMMIT** small changes often

---

## 🐛 TROUBLESHOOTING

**Problem:** Can't push
```bash
git pull origin main
git push origin main
```

**Problem:** Merge conflict
```bash
# Open conflicting file
# Remove <<<, ===, >>> markers
# Keep the code you want
git add .
git commit -m "Fix conflict"
git push origin main
```

**Problem:** Made mistake
```bash
git status           # See what changed
git checkout -- file # Undo changes to file
```

**Problem:** Want to see what changed
```bash
git diff            # Show changes
git diff file.c     # Changes in specific file
```

---

## 📝 COMMIT MESSAGE FORMAT

```
Type: Short description

Examples:
✅ Add: New feature
✅ Fix: Bug description  
✅ Update: What you changed
✅ Refactor: Code improvement
✅ Docs: Documentation update
```

---

## 🎯 BEFORE YOU LEAVE

```bash
# 1. Save everything
git add .
git commit -m "Your message"

# 2. Push to GitHub
git pull origin main
git push origin main

# 3. Tell your partner!
```

---

## 📞 COMMUNICATION TEMPLATES

**Starting work:**
> "Hey, I'm working on [feature] now in person1/task_manager.c"

**After pushing:**
> "Just pushed changes to [feature]. Please pull before you start!"

**Found a bug:**
> "Found a bug in [function]. Can you take a look?"

**Done for the day:**
> "Pushed all my changes. Good to work on your module!"

---

## 🎓 LEARNING RESOURCES

- Git Basics: https://git-scm.com/book/en/v2/Getting-Started-Git-Basics
- GitHub Guides: https://guides.github.com/
- C Reference: https://en.cppreference.com/w/c

---

**REMEMBER:**
- Small commits > Big commits
- Clear messages > Vague messages  
- Test first > Fix later
- Ask questions > Stay confused

**You got this! 🚀**

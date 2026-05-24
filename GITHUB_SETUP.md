# 🚀 GitHub Setup Guide - Step by Step

## 📌 Prerequisites
- Git installed on your computer
- Two GitHub accounts (yours and your friend's)
- Project files downloaded

---

## 👤 PERSON 1 (Repository Owner - YOU)

### Step 1: Create Repository on GitHub
1. Go to https://github.com
2. Click the "+" icon (top right) → "New repository"
3. Fill in:
   - Repository name: `todo-list-collaborative`
   - Description: `Simple C To-Do List Manager - Collaborative Project`
   - Choose: **Public** (so your friend can access)
   - ✅ Check "Add a README file" (uncheck this, we have our own)
   - Click "Create repository"

### Step 2: Copy the Repository URL
After creating, you'll see:
```
https://github.com/YOUR_USERNAME/todo-list-collaborative.git
```
Copy this URL!

### Step 3: Initialize and Push Project

Open terminal/command prompt in the project folder:

```bash
# Navigate to project directory
cd todo_collaboration

# Initialize git
git init

# Add all files
git add .

# Commit files
git commit -m "Initial commit: To-Do List collaborative project"

# Rename branch to main
git branch -M main

# Add remote (replace with YOUR repository URL)
git remote add origin https://github.com/YOUR_USERNAME/todo-list-collaborative.git

# Push to GitHub
git push -u origin main
```

### Step 4: Add Your Friend as Collaborator
1. Go to your repository on GitHub
2. Click "Settings" tab
3. Click "Collaborators" (left sidebar)
4. Click "Add people"
5. Enter your friend's GitHub username or email
6. Click "Add [username] to this repository"
7. Your friend will receive an email invitation

---

## 👥 PERSON 2 (Collaborator - YOUR FRIEND)

### Step 1: Accept Invitation
1. Check email for repository invitation
2. Click "Accept invitation" 
3. Or go to: https://github.com/PERSON1_USERNAME/todo-list-collaborative
4. Click "Accept invitation" banner at top

### Step 2: Clone the Repository

```bash
# Clone the repository (replace with actual URL)
git clone https://github.com/PERSON1_USERNAME/todo-list-collaborative.git

# Navigate into the folder
cd todo-list-collaborative
```

### Step 3: Create Your Branch

```bash
# Create and switch to your branch
git checkout -b person2-module

# Verify you're on the new branch
git branch
```

### Step 4: Work on Your Module
1. Open `person2/task_operations.c`
2. Add your name in the comment at top
3. Make any improvements/changes
4. Test the code

### Step 5: Commit and Push Your Changes

```bash
# Check what files changed
git status

# Add your changes
git add person2/task_operations.c

# Or add all changes
git add .

# Commit with a message
git commit -m "Add: Person 2 module - Mark done and delete tasks"

# Push to GitHub
git push origin person2-module
```

### Step 6: Create Pull Request
1. Go to the repository on GitHub
2. You'll see a banner "Compare & pull request" → Click it
3. Or click "Pull requests" tab → "New pull request"
4. Select: base: `main` ← compare: `person2-module`
5. Add title: "Add Person 2 Module - Task Operations"
6. Add description explaining your changes
7. Click "Create pull request"

---

## 🔄 PERSON 1: Review and Merge

### Step 1: Review Pull Request
1. Go to "Pull requests" tab
2. Click on your friend's pull request
3. Review the code changes
4. Check "Files changed" tab
5. Add comments if needed

### Step 2: Merge the Pull Request
1. If everything looks good, click "Merge pull request"
2. Click "Confirm merge"
3. Optionally delete the branch

### Step 3: Pull Latest Changes
```bash
# Get the latest code
git pull origin main
```

---

## 🔄 Alternative: Both Push Directly (Simpler Method)

If you both have collaborator access, you can work directly:

### Person 1:
```bash
cd todo_collaboration
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin YOUR_REPO_URL
git push -u origin main
```

### Person 2:
```bash
git clone REPO_URL
cd todo-list-collaborative

# Work on person2 files
# Edit person2/task_operations.c

git add person2/task_operations.c
git commit -m "Add: Person 2 contributions"
git pull origin main  # Always pull first!
git push origin main
```

### Person 1 Updates:
```bash
# Before starting work
git pull origin main

# Work on person1 files
git add person1/task_manager.c
git commit -m "Update: Person 1 module improvements"
git pull origin main  # Pull again to be safe
git push origin main
```

---

## 📊 Quick Reference Commands

```bash
# Check status
git status

# Add files
git add filename.c
git add .              # Add all files

# Commit
git commit -m "Your message here"

# Push
git push origin main

# Pull latest changes
git pull origin main

# Check which branch you're on
git branch

# Create and switch to new branch
git checkout -b branch-name

# Switch to existing branch
git checkout branch-name

# View commit history
git log
```

---

## ⚠️ Important Tips

1. **Always pull before push:**
   ```bash
   git pull origin main
   git push origin main
   ```

2. **Communicate:** Tell your partner when you're pushing changes

3. **Test before pushing:** Make sure code compiles and runs

4. **Write clear commit messages:** Explain what you changed

5. **Handle conflicts:** If you get merge conflicts, ask for help or:
   ```bash
   git pull origin main
   # Fix conflicts in files
   git add .
   git commit -m "Resolve merge conflicts"
   git push origin main
   ```

---

## 🆘 Troubleshooting

### "Permission denied"
- Make sure you're added as collaborator
- Check you're using correct repository URL

### "Failed to push"
```bash
git pull origin main
git push origin main
```

### "Merge conflict"
1. Open the conflicting file
2. Look for `<<<<<<<`, `=======`, `>>>>>>>`
3. Keep the code you want
4. Remove conflict markers
5. `git add .` → `git commit` → `git push`

### Want to start over?
```bash
rm -rf .git
git init
# Start fresh with git add, commit, push
```

---

**Need Help?** Ask your partner or refer to: https://docs.github.com/en/get-started

Good luck with your collaboration! 🎉

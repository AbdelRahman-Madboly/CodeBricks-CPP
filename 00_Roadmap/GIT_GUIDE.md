# 📚 Git Workflow Guide

> Complete Git commands for managing the CodeBricks-CPP repository

---

## 📋 Table of Contents

1. [Initial Setup (One-Time)](#-initial-setup-one-time)
2. [Daily Workflow](#-daily-workflow)
3. [Commit Message Convention](#-commit-message-convention)
4. [Branch Management](#-branch-management)
5. [Useful Commands](#-useful-commands)
6. [Troubleshooting](#-troubleshooting)
7. [Quick Reference Card](#-quick-reference-card)

---

## 🔗 Initial Setup (One-Time)

### Option A: Clone Existing Repository

If the repository already exists on GitHub:

```bash
# Navigate to your CodeBricks directory
cd D:\CodeBricks

# Clone the repository
git clone https://github.com/AbdelRahman-Madboly/CodeBricks-CPP.git CPP

# Navigate into the repository
cd CPP

# Verify remote connection
git remote -v
```

Expected output:
```
origin  https://github.com/AbdelRahman-Madboly/CodeBricks-CPP.git (fetch)
origin  https://github.com/AbdelRahman-Madboly/CodeBricks-CPP.git (push)
```

---

### Option B: Initialize New Repository

If starting fresh with an empty folder:

#### Step 1: Create Repository on GitHub

1. Go to [GitHub.com](https://github.com) → Click **"New Repository"**
2. Repository name: `CodeBricks-CPP`
3. Description: `C++ Systems Foundation - Memory, Pointers, and Algorithmic Depth`
4. **Important:** Do NOT check any initialization options (README, .gitignore, license)
5. Click **"Create repository"**

#### Step 2: Initialize Local Folder

```bash
# Navigate to your project
cd D:\CodeBricks\CPP

# Initialize git repository
git init

# Rename default branch to 'main'
git branch -m main

# Create .gitignore (essential!)
# See .gitignore section below

# Add all files
git add .

# Create first commit
git commit -m "[INIT] Initialize CodeBricks-CPP repository"

# Link to GitHub repository
git remote add origin https://github.com/AbdelRahman-Madboly/CodeBricks-CPP.git

# Push to GitHub
git push -u origin main
```

---

### Step 3: Configure Git Identity (One-Time)

```bash
# Set your name
git config --global user.name "AbdelRahman Madboly"

# Set your email (same as GitHub)
git config --global user.email "abdelrahmanmadboly25@gmail.com"

# Verify configuration
git config --list
```

---

### Step 4: Create .gitignore

Create a file named `.gitignore` in the root of your repository:

```gitignore
# =========================
# Build Directories
# =========================
build/
Debug/
Release/
x64/
x86/
out/
.vs/

# =========================
# Compiled Files
# =========================
*.exe
*.obj
*.o
*.dll
*.lib
*.pdb
*.ilk
*.exp
*.idb

# =========================
# IDE Files
# =========================
# Visual Studio
.vs/
*.vcxproj.user
*.suo
*.sdf
*.opensdf
*.VC.db
*.VC.VC.opendb

# VS Code
.vscode/settings.json
.vscode/*.log

# CodeBlocks
*.layout
*.depend

# =========================
# CMake
# =========================
CMakeCache.txt
CMakeFiles/
cmake_install.cmake
Makefile
compile_commands.json

# =========================
# OS Files
# =========================
.DS_Store
Thumbs.db
desktop.ini

# =========================
# Temporary Files
# =========================
*.tmp
*.temp
*.log
*.bak
*~
```

---

## 🔄 Daily Workflow

### The 3-Step Loop

Every time you finish working on a feature or lesson:

```bash
# Step 1: CHECK what changed
git status

# Step 2: STAGE changes (pack the box)
git add .

# Step 3: COMMIT with message (label the box)
git commit -m "documented"

# Step 4: PUSH to GitHub (ship the box)
git push origin main
```

### Visual Flow

```
┌─────────────────────────────────────────────────────────────┐
│                    GIT DAILY WORKFLOW                       │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│   Working Directory    Staging Area      Repository         │
│   (Your files)         (git add)         (git commit)       │
│                                                             │
│       📁                   📦                  📚           │
│        │                    │                   │           │
│        │ ── git add . ──>   │                   │           │
│        │                    │ ── git commit --> │           │
│        │                    │                   │           │
│        │                    │       git push    │           │
│        │                    │         │         │           │
│        │                    │         ▼         │           │
│        │                    │      [GitHub]     │           │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

---

### Example Session

```bash
# Morning: Start working
cd D:\CodeBricks\CPP

# Check current status
git status

# Work on Part 03 Functions...
# ... write code ...
# ... test code ...

# After completing a feature:
git add .
git commit -m "[FEAT] Add recursive factorial implementation in Part 03"
git push origin main

# Work on more features...
# ... write code ...

# Before closing laptop:
git add .
git commit -m "[FEAT] Add Fibonacci recursive and iterative solutions"
git push origin main
```

---

## 📝 Commit Message Convention

### Format

```
[TYPE] Brief description (max 50 chars)

Optional longer description if needed.
```

### Types

| Type | When to Use | Example |
|------|-------------|---------|
| `[INIT]` | Initial setup | `[INIT] Initialize repository structure` |
| `[FEAT]` | New feature/code | `[FEAT] Add prime checker function` |
| `[FIX]` | Bug fixes | `[FIX] Resolve stack overflow in recursion` |
| `[DOCS]` | Documentation | `[DOCS] Update Part 03 README with examples` |
| `[REFACTOR]` | Code improvement | `[REFACTOR] Optimize loop in factorial` |
| `[TEST]` | Adding tests | `[TEST] Add unit tests for swap function` |
| `[CHORE]` | Maintenance | `[CHORE] Update .gitignore` |
| `[STYLE]` | Formatting only | `[STYLE] Fix indentation in main.cpp` |

### Good vs Bad Examples

```bash
# ✅ GOOD - Clear and specific
git commit -m "[FEAT] Add recursive Fibonacci with memoization"
git commit -m "[FIX] Handle negative input in factorial function"
git commit -m "[DOCS] Add interview notes to Part 02"

# ❌ BAD - Vague and unclear
git commit -m "Update code"
git commit -m "Fix bug"
git commit -m "Changes"
git commit -m "WIP"
```

---

## 🌿 Branch Management

### When to Use Branches

For CodeBricks (personal learning), you can work directly on `main`. But for larger features:

```bash
# Create and switch to new branch
git checkout -b feature/recursion-optimization

# Work on the feature...
git add .
git commit -m "[FEAT] Optimize tail recursion"

# Push branch to GitHub
git push origin feature/recursion-optimization

# Switch back to main
git checkout main

# Merge feature into main
git merge feature/recursion-optimization

# Push updated main
git push origin main

# Delete branch (optional)
git branch -d feature/recursion-optimization
```

### View Branches

```bash
# List local branches
git branch

# List all branches (local + remote)
git branch -a

# See current branch
git branch --show-current
```

---

## 🛠️ Useful Commands

### Viewing History

```bash
# View commit history
git log

# View compact history
git log --oneline

# View history with graph
git log --oneline --graph --all

# View history of specific file
git log --oneline -- path/to/file.cpp
```

### Checking Changes

```bash
# See what changed (unstaged)
git diff

# See what's staged
git diff --staged

# See changes in specific file
git diff path/to/file.cpp
```

### Undoing Changes

```bash
# Discard changes in working directory (CAREFUL!)
git checkout -- path/to/file.cpp

# Unstage a file (keep changes)
git reset HEAD path/to/file.cpp

# Undo last commit (keep changes staged)
git reset --soft HEAD~1

# Undo last commit (keep changes unstaged)
git reset HEAD~1

# Completely undo last commit (CAREFUL - loses changes!)
git reset --hard HEAD~1
```

### Working with Remote

```bash
# Fetch updates from GitHub (doesn't merge)
git fetch origin

# Pull updates (fetch + merge)
git pull origin main

# Push to GitHub
git push origin main

# Force push (CAREFUL - overwrites remote!)
git push origin main --force
```

### Stashing (Temporary Storage)

```bash
# Save current changes temporarily
git stash

# List stashed changes
git stash list

# Apply most recent stash
git stash pop

# Apply specific stash
git stash apply stash@{0}
```

---

## ❗ Troubleshooting

### Common Errors & Solutions

| Error | Cause | Solution |
|-------|-------|----------|
| `fatal: not a git repository` | Not in a git folder | Run `git init` or `cd` to correct folder |
| `error: failed to push` | Remote has changes you don't | Run `git pull origin main` first |
| `CONFLICT (content)` | Merge conflict | Edit file, remove markers, commit |
| `Changes not staged` | Files not added | Run `git add .` before commit |
| `nothing to commit` | No changes made | Make changes first |
| `remote origin already exists` | Remote already configured | Check with `git remote -v` |

### Force Push (Last Resort)

When your local and remote are completely out of sync:

```bash
# WARNING: This overwrites remote with your local!
git push origin main --force
```

### Reset to Remote

When your local is messed up and you want remote's version:

```bash
# WARNING: This loses all local changes!
git fetch origin
git reset --hard origin/main
```

### View Remote URL

```bash
git remote -v
```

### Change Remote URL

```bash
git remote set-url origin https://github.com/AbdelRahman-Madboly/CodeBricks-CPP.git
```

---

## 📋 Quick Reference Card

### Daily Commands

```bash
git status                    # Check status
git add .                     # Stage all changes
git commit -m "[TYPE] msg"    # Commit with message
git push origin main          # Push to GitHub
git pull origin main          # Pull from GitHub
```

### Information Commands

```bash
git log --oneline            # View history
git diff                     # See changes
git branch                   # List branches
git remote -v                # View remote URL
```

### Undo Commands

```bash
git checkout -- file.cpp     # Discard file changes
git reset HEAD file.cpp      # Unstage file
git reset --soft HEAD~1      # Undo commit (keep staged)
git reset HEAD~1             # Undo commit (keep unstaged)
```

### Setup Commands

```bash
git init                     # Initialize repository
git clone <url>              # Clone repository
git remote add origin <url>  # Link to remote
```

---

## 🎯 CodeBricks-CPP Specific Workflow

### After Completing a Part

```bash
# Example: Completed Part 03 Functions

cd D:\CodeBricks\CPP

# Stage all changes
git add .

# Commit with clear message
git commit -m "[FEAT] Complete Part 03: Functions - recursion, parameters, return types"

# Push to GitHub
git push origin main
```

### After Solving Problem Sheet

```bash
git add .
git commit -m "[FEAT] Solve Sheet 1 Problems 1-5: loops and factorial"
git push origin main
```

### Updating Documentation

```bash
git add .
git commit -m "[DOCS] Add interview notes to Part 03 Functions"
git push origin main
```

---

<p align="center">
  <strong>📚 Commit early, commit often, push before sleep!</strong>
</p>

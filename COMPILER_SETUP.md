# ⚙️ Compiler & IDE Setup Guide

> **Primary Recommendation:** Visual Studio 2022 (Best debugging experience)  
> **Alternative:** VS Code + GCC (Lightweight, cross-platform)  
> **Legacy:** CodeBlocks (Simple, beginner-friendly)

---

## 📋 Table of Contents

1. [Environment Comparison](#-environment-comparison)
2. [Visual Studio 2022 Setup](#-visual-studio-2022-recommended)
3. [VS Code + GCC Setup](#-vs-code--gcc-alternative)
4. [CodeBlocks Setup](#-codeblocks-legacy)
5. [Manual Compilation Guide](#-manual-compilation-the-engineers-way)
6. [Troubleshooting](#-troubleshooting)

---

## 🔄 Environment Comparison

| Feature | Visual Studio 2022 | VS Code + GCC | CodeBlocks |
|---------|-------------------|---------------|------------|
| **Debugging** | ⭐⭐⭐⭐⭐ Excellent | ⭐⭐⭐ Good | ⭐⭐ Basic |
| **IntelliSense** | ⭐⭐⭐⭐⭐ Best | ⭐⭐⭐⭐ Good | ⭐⭐ Limited |
| **Setup Difficulty** | Easy | Medium | Easy |
| **Disk Space** | ~10-20 GB | ~2 GB | ~500 MB |
| **Cross-Platform** | Windows only | All platforms | All platforms |
| **Industry Standard** | Yes (Windows dev) | Yes (Linux dev) | No |
| **Best For** | Learning, Windows | Lightweight, Linux | Quick start |

**Recommendation:** Start with **Visual Studio 2022** for the best learning experience, then transition to **VS Code + GCC** when comfortable with the terminal.

---

## 🟣 Visual Studio 2022 (Recommended)

### Step 1: Download & Install

1. **Download** Visual Studio 2022 Community (Free):
   - https://visualstudio.microsoft.com/downloads/
   - Select **"Community 2022"** (Free for individuals)

2. **Run the Installer** and select workloads:
   
   ✅ **Required Workload:**
   ```
   Desktop development with C++
   ```
   
   ✅ **Optional Components** (under "Individual Components"):
   ```
   □ C++ CMake tools for Windows
   □ C++ AddressSanitizer (for memory debugging)
   □ Windows 10/11 SDK (latest version)
   ```

3. **Install** (~10-15 GB, takes 20-40 minutes)

### Step 2: Create Your First Project

#### Option A: Open Folder (Recommended for CodeBricks)

```
1. File → Open → Folder
2. Navigate to: D:\CodeBricks\CPP
3. Visual Studio will auto-detect C++ files
```

#### Option B: Create New Project

```
1. File → New → Project
2. Search: "Console App"
3. Select: "Console App (C++)"
4. Project Name: "CodeBricks_Part01"
5. Location: D:\CodeBricks\CPP\01_Curriculum
6. Click "Create"
```

### Step 3: Configure Settings

#### Set C++ Standard to C++17

```
1. Right-click project → Properties
2. Configuration Properties → C/C++ → Language
3. C++ Language Standard: ISO C++17 Standard (/std:c++17)
4. Click "Apply" → "OK"
```

#### Enable All Warnings

```
1. Right-click project → Properties
2. Configuration Properties → C/C++ → General
3. Warning Level: Level4 (/W4)
4. Treat Warnings as Errors: Yes (/WX) [Optional but recommended]
```

### Step 4: Build & Run

| Action | Shortcut |
|--------|----------|
| Build Solution | `Ctrl + Shift + B` |
| Run without Debugging | `Ctrl + F5` |
| Run with Debugging | `F5` |
| Set Breakpoint | `F9` |
| Step Over | `F10` |
| Step Into | `F11` |

### Step 5: Debugging (Visual Studio's Superpower)

```cpp
// Example: Debug this code
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    for (int i = 0; i <= 5; i++) {  // Bug: i <= 5 causes out-of-bounds
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
```

**How to Debug:**
1. Click left margin (line number) to set breakpoint (red dot)
2. Press `F5` to start debugging
3. Use **Watch Window** to monitor variables
4. Use **Memory Window** to see raw memory
5. Press `F10` to step through code line by line

---

## 🔵 VS Code + GCC (Alternative)

### Step 1: Install MSYS2 (GCC for Windows)

1. **Download MSYS2:** https://www.msys2.org/

2. **Install** to default location: `C:\msys64`

3. **Open MSYS2 UCRT64 terminal** and run:

```bash
# Update package database
pacman -Syu

# Install C++ toolchain
pacman -S mingw-w64-ucrt-x86_64-toolchain

# Press Enter to install all (default)
```

4. **Add to Windows PATH:**

```
1. Search "Environment Variables" in Windows
2. System Properties → Environment Variables
3. Under "System Variables" → Find "Path" → Edit
4. Add New: C:\msys64\ucrt64\bin
5. Click OK → OK → OK
```

5. **Verify Installation** (open new Command Prompt):

```cmd
g++ --version
```

Expected output:
```
g++ (Rev3, Built by MSYS2 project) 14.2.0
```

### Step 2: Install VS Code

1. **Download:** https://code.visualstudio.com/

2. **Install Extensions** (Ctrl+Shift+X):
   - `C/C++` by Microsoft (Required)
   - `C/C++ Extension Pack` (Recommended)
   - `Code Runner` (Optional, for quick runs)

### Step 3: Configure VS Code

#### Create `.vscode/tasks.json` for Building

Create folder `.vscode` in your project root, then create `tasks.json`:

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build C++",
            "type": "shell",
            "command": "g++",
            "args": [
                "-g",
                "-Wall",
                "-Wextra",
                "-std=c++17",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": ["$gcc"]
        }
    ]
}
```

#### Create `.vscode/launch.json` for Debugging

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug C++",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "C:/msys64/ucrt64/bin/gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "Build C++"
        }
    ]
}
```

#### Create `.vscode/c_cpp_properties.json` for IntelliSense

```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "C:/msys64/ucrt64/include/**"
            ],
            "defines": ["_DEBUG", "UNICODE", "_UNICODE"],
            "compilerPath": "C:/msys64/ucrt64/bin/g++.exe",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "windows-gcc-x64"
        }
    ],
    "version": 4
}
```

### Step 4: Build & Run in VS Code

| Action | Shortcut |
|--------|----------|
| Build | `Ctrl + Shift + B` |
| Run & Debug | `F5` |
| Run without Debug | `Ctrl + F5` |
| Toggle Breakpoint | `F9` |

---

## 🟢 CodeBlocks (Legacy)

### Step 1: Download & Install

1. **Download:** https://www.codeblocks.org/downloads/
   - Choose: `codeblocks-20.03mingw-setup.exe` (includes MinGW)

2. **Install** with default settings

3. **First Launch:**
   - Select `GNU GCC Compiler` when prompted

### Step 2: Configure Compiler

```
1. Settings → Compiler
2. Selected Compiler: GNU GCC Compiler
3. Compiler Flags tab:
   ✅ Enable all common compiler warnings [-Wall]
   ✅ Have g++ follow the C++17 standard [-std=c++17]
4. OK
```

### Step 3: Create Project

```
1. File → New → Project
2. Select "Console Application" → Go
3. Language: C++
4. Project title: CodeBricks_Part01
5. Folder: D:\CodeBricks\CPP\01_Curriculum
6. Finish
```

### Step 4: Build & Run

| Action | Shortcut |
|--------|----------|
| Build | `Ctrl + F9` |
| Run | `Ctrl + F10` |
| Build & Run | `F9` |

---

## 🔧 Manual Compilation (The Engineer's Way)

Understanding manual compilation is essential for debugging and deployment.

### Basic Compilation

```bash
# Navigate to your file
cd D:\CodeBricks\CPP\01_Curriculum\Part_01_Fundamentals\lessons

# Compile
g++ main.cpp -o main.exe

# Run
./main.exe    # or main.exe on Windows
```

### Compilation with All Warnings (Recommended)

```bash
g++ -Wall -Wextra -Werror -std=c++17 -o main.exe main.cpp
```

### Compilation with Debug Symbols

```bash
g++ -g -Wall -std=c++17 -o main_debug.exe main.cpp
```

### Compiler Flags Reference

| Flag | Purpose | When to Use |
|------|---------|-------------|
| `-o <name>` | Output executable name | Always |
| `-Wall` | Enable common warnings | Always |
| `-Wextra` | Enable extra warnings | Recommended |
| `-Werror` | Treat warnings as errors | Learning phase |
| `-std=c++17` | Use C++17 standard | Always |
| `-g` | Include debug symbols | When debugging |
| `-O2` | Optimize for speed | Release builds |
| `-O0` | No optimization | Debugging |

### Multi-File Compilation

```bash
# Compile multiple files
g++ -Wall -std=c++17 -o app main.cpp utils.cpp math.cpp

# Or compile separately and link
g++ -c main.cpp -o main.o
g++ -c utils.cpp -o utils.o
g++ main.o utils.o -o app
```

---

## ❗ Troubleshooting

### Common Errors

| Error | Cause | Solution |
|-------|-------|----------|
| `'g++' is not recognized` | PATH not set | Add `C:\msys64\ucrt64\bin` to PATH |
| `fatal error: no input files` | No .cpp file specified | Check filename in command |
| `undefined reference to 'main'` | No main() function | Add `int main() {}` |
| `undefined reference to...` | Missing source file | Compile all .cpp files together |
| `cannot open output file` | File in use / permissions | Close running .exe, run as admin |

### Visual Studio Specific

| Issue | Solution |
|-------|----------|
| "Cannot find or open PDB file" | Ignore (just debug info) or rebuild |
| Slow IntelliSense | Disable "Predictive IntelliSense" in settings |
| "Project is out of date" | Press Yes to rebuild |

### VS Code Specific

| Issue | Solution |
|-------|----------|
| "IntelliSense not working" | Check `c_cpp_properties.json` compilerPath |
| "Build task not found" | Create `tasks.json` in `.vscode` folder |
| "Debugger not found" | Verify `miDebuggerPath` in `launch.json` |

### Verification Commands

```bash
# Check GCC version
g++ --version

# Check GCC location
where g++        # Windows
which g++        # Linux/Mac

# Test compilation
echo '#include <iostream>' > test.cpp
echo 'int main() { std::cout << "Works!"; }' >> test.cpp
g++ test.cpp -o test && ./test
```

---

## 📚 Quick Reference Card

### Visual Studio 2022

| Action | Shortcut |
|--------|----------|
| Build | `Ctrl + Shift + B` |
| Run | `Ctrl + F5` |
| Debug | `F5` |
| Breakpoint | `F9` |
| Step Over | `F10` |
| Step Into | `F11` |

### VS Code

| Action | Shortcut |
|--------|----------|
| Build | `Ctrl + Shift + B` |
| Debug | `F5` |
| Breakpoint | `F9` |
| Command Palette | `Ctrl + Shift + P` |

### Command Line

```bash
# Standard build
g++ -Wall -std=c++17 -o app main.cpp

# Debug build
g++ -g -Wall -std=c++17 -o app_debug main.cpp

# Run
./app
```

---

## ✅ Final Checklist

Before starting CodeBricks, verify:

- [ ] IDE installed (VS 2022 or VS Code)
- [ ] Compiler working (`g++ --version` returns version)
- [ ] Can create, compile, and run "Hello World"
- [ ] Understand Build vs Run vs Debug
- [ ] Know how to set breakpoints

---

<p align="center">
  <strong>🛠️ Environment ready. Let's build!</strong>
</p>

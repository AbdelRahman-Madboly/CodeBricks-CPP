# ⚙️ C++ Compiler Setup & Manual Build Guide

This document establishes the official development environment for the **CodeBricks** repository.  
It moves beyond standard "Run Button" tutorials and focuses on the underlying toolchain used in professional software engineering.

---

## ✅ Green Light Confirmation

You have successfully installed a **state-of-the-art C++ compiler (GCC 15.2.0)**.  
Your system is now operating with **professional-grade tooling**, suitable for real-world software and embedded development.

This file serves as the **Instruction Manual** for:
- Reproducing the environment
- Understanding the compiler toolchain
- Compiling C++ code manually (the *Engineer’s Way*)

---

## 1. Environment Specification

We utilize the **MSYS2 UCRT64** toolchain.  
This provides a modern, Linux-like build environment native to Windows and ensures compatibility with advanced libraries such as OpenCV and Boost.

**Toolchain Details:**
- **Compiler**: `g++` (GNU C++ Compiler) 14.x.x+
- **Debugger**: `gdb` (GNU Debugger)
- **Build System**: MinGW-w64 via MSYS2
- **Language Standard**: C++17 (ISO)

---

## 2. Installation Guide (Replication)

### Step A: Install the Toolchain

1. Download **MSYS2** from https://www.msys2.org/
2. Open the **MSYS2 UCRT64** terminal.
3. Update the package database:
```bash
pacman -Syu
```
4. Install the full toolchain:
```bash
pacman -S mingw-w64-ucrt-x86_64-toolchain
```

---

### Step B: Link MSYS2 to Windows

Add the following path to the Windows **System PATH**:
```
C:\msys64\ucrt64\bin
```

---

### Step C: Verification

```bat
g++ --version
```

Expected:
```
g++ (Rev...) 13.x.x or higher
```

---

## 3. Manual Compilation Guide (The Engineer’s Way)

```bash
g++ [flags] [source_file] -o [output_name]
```

### Common Flags

| Flag | Purpose |
|-----|--------|
| -o | Output executable |
| -g | Debug symbols |
| -Wall | Enable warnings |
| -std=c++17 | Enforce C++17 |

---

## 4. Tutorial: First Manual Build

### manual_test.cpp
```cpp
#include <iostream>

int main() {
    std::cout << "Manual Compilation Successful!" << std::endl;
    return 0;
}
```

### Compile
```bash
g++ -g -Wall manual_test.cpp -o manual_test.exe
```

### Run
```bash
./manual_test.exe
```

---

## 5. Troubleshooting

### 'g++' not recognized
- Fix PATH: `C:\msys64\ucrt64\bin`

### fatal error: no input files
- Ensure `.cpp` file is specified

### undefined reference
- Missing `-l` linker flags

---

## ✅ Final Notes

This setup mirrors real-world professional C++ environments.

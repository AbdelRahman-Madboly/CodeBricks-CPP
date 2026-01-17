<p align="center">
  <img src="https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++17">
  <img src="https://img.shields.io/badge/Compiler-GCC_14.2-A42E2B?style=for-the-badge&logo=gnu&logoColor=white" alt="GCC">
  <img src="https://img.shields.io/badge/IDE-Visual_Studio_2022-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white" alt="VS2022">
  <img src="https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge" alt="Status">
</p>

<h1 align="center">🧱 CodeBricks-CPP</h1>

<p align="center">
  <strong>"To master the cloud, you must first master the pointer."</strong>
</p>

<p align="center">
  <em>The Systems Foundation — Memory, Pointers, and Algorithmic Depth for AI Engineers</em>
</p>

<p align="center">
  <a href="#-quick-start">Quick Start</a> •
  <a href="#-repository-structure">Structure</a> •
  <a href="#-learning-roadmap">Roadmap</a> •
  <a href="#-problem-sheets">Problems</a> •
  <a href="COMPILER_SETUP.md">Setup Guide</a>
</p>

---

## 🎯 Project Overview

**CodeBricks-CPP** is a structured engineering portfolio documenting the journey from **C++ Fundamentals** to **Systems Programming**, designed to build the foundation required for:

1. **AI & Computer Vision** — Understanding memory for PyTorch, OpenCV optimization
2. **Embedded Systems** — Memory management, bitwise operations, real-time constraints
3. **Edge Deployment** — Optimizing inference on Raspberry Pi, Jetson Nano

### Why C++ First?

```
┌─────────────────────────────────────────────────────────────┐
│  AI Model Training      →  Python + PyTorch (High-level)    │
│  AI Model Deployment    →  C++ + ONNX/TensorRT (Low-level)  │
│  Edge AI (RPi, Jetson)  →  C++ for real-time performance    │
│  OpenCV Core            →  Written in C++                   │
│  Memory Optimization    →  Requires C++ understanding       │
└─────────────────────────────────────────────────────────────┘
```

> **"The engineer who understands pointers will always outperform the one who only knows APIs."**

---

## 🚀 Quick Start

### Option 1: Visual Studio 2022 (Recommended for Windows)

```powershell
# 1. Clone the repository
git clone https://github.com/AbdelRahman-Madboly/CodeBricks-CPP.git
cd CodeBricks-CPP

# 2. Open in Visual Studio
start CodeBricks-CPP.sln
# Or: File → Open → Folder → Select CodeBricks-CPP
```

### Option 2: Command Line (GCC)

```bash
# Navigate to a specific lesson
cd 01_Curriculum/Part_03_Functions/lessons

# Compile with all warnings
g++ -Wall -Wextra -std=c++17 -o app main.cpp

# Run
./app          # Linux/Mac
app.exe        # Windows
```

### Option 3: VS Code

```bash
# Open in VS Code
code .

# Use Ctrl+Shift+B to build (requires tasks.json setup)
# See COMPILER_SETUP.md for detailed configuration
```

📖 **Full Setup Guide:** [COMPILER_SETUP.md](COMPILER_SETUP.md)

---

## 📂 Repository Structure

```
CodeBricks-CPP/
│
├── 📁 00_Roadmap/                      # Strategic learning path
│   ├── 📄 README.md                    # Roadmap overview
│   └── 📄 ROADMAP.md                   # Detailed timeline
│
├── 📁 01_Curriculum/                   # Core learning modules
│   ├── 📁 Part_01_Fundamentals/        # ✅ Variables, Types, Scope
│   │   ├── 📄 README.md
│   │   ├── 📁 lessons/
│   │   └── 📁 exercises/
│   │
│   ├── 📁 Part_02_Control_Flow/        # ✅ Loops, Conditions
│   │   ├── 📄 README.md
│   │   ├── 📁 lessons/
│   │   └── 📁 exercises/
│   │
│   ├── 📁 Part_03_Functions/           # 🔄 Functions, Recursion
│   │   ├── 📄 README.md
│   │   ├── 📁 lessons/
│   │   └── 📁 exercises/
│   │
│   ├── 📁 Part_04_Arrays_Strings/      # ⏳ Arrays, C-Strings
│   ├── 📁 Part_05_Pointers/            # ⏳ Memory, Pointers
│   ├── 📁 Part_06_OOP/                 # ⏳ Classes, Objects
│   └── ...
│
├── 📁 02_Problem_Solving/              # Engineering problem sheets
│   ├── 📄 README.md
│   ├── 📁 Sheet_01_Loops/              # Loop-based problems
│   ├── 📁 Sheet_02_Bitwise/            # Bit manipulation
│   ├── 📁 Sheet_03_Arrays/             # Array algorithms
│   ├── 📁 Sheet_04_Strings/            # String manipulation
│   └── 📁 Sheet_05_Complexity/         # O(n) optimization
│
├── 📁 03_Projects/                     # Standalone applications
│   ├── 📁 matrix_library/              # Custom cv::Mat equivalent
│   └── 📁 custom_vector/               # std::vector from scratch
│
├── 📄 README.md                        # This file
├── 📄 ROADMAP.md                       # Detailed learning roadmap
├── 📄 COMPILER_SETUP.md                # IDE & compiler setup guide
├── 📄 GIT_GUIDE.md                     # Git workflow commands
└── 📄 .gitignore                       # Build artifacts exclusion
```

---

## 🗺️ Learning Roadmap

### Current Progress

```
Phase 1: Procedural Foundation
├── [✅] Part 01: Fundamentals      → Variables, Types, Scope, Casting
├── [✅] Part 02: Control Flow      → Loops, Conditions, Patterns
├── [🔄] Part 03: Functions         → Parameters, Return, Recursion  ← CURRENT
├── [⏳] Part 04: Arrays & Strings  → Contiguous Memory, Manipulation
└── [⏳] Part 05: Complexity        → Big-O, Bitwise Optimization

Phase 2: Memory & Pointers
├── [⏳] Part 06: Pointers          → Addresses, Dereferencing
├── [⏳] Part 07: References        → Aliases, Pass-by-Reference
└── [⏳] Part 08: Dynamic Memory    → Heap, new/delete, Smart Pointers

Phase 3: Object-Oriented Programming
├── [⏳] Part 09: Classes           → Encapsulation, Constructors
├── [⏳] Part 10: Inheritance       → Polymorphism, Virtual Functions
└── [⏳] Part 11: Operator Overload → Custom operators

Phase 4: Modern C++ & STL
├── [⏳] Part 12: Templates         → Generic Programming
├── [⏳] Part 13: STL Containers    → Vector, Map, Set
└── [⏳] Part 14: STL Algorithms    → Sort, Find, Transform
```

📖 **Detailed Roadmap:** [ROADMAP.md](ROADMAP.md)

---

## 📝 Problem Sheets

Engineering-level problem sheets integrated into learning:

| Sheet | Focus Area | Problems | Difficulty | Reference |
|-------|-----------|----------|------------|-----------|
| **Sheet 1** | Loops & Logic | 13 | ⭐-⭐⭐ | Part 02, 03 |
| **Sheet 2** | Bitwise Operations | 11 | ⭐⭐-⭐⭐⭐ | Part 05 |
| **Sheet 3** | Arrays & Functions | 17 | ⭐⭐-⭐⭐⭐ | Part 04 |
| **Sheet 4** | String Manipulation | 7 | ⭐⭐-⭐⭐⭐ | Part 04 |
| **Sheet 5** | Algorithm Complexity | 9 | ⭐⭐⭐ | Part 05 |

### Sample Problems

```cpp
// Sheet 1: Calculate factorial without recursion
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) result *= i;
    return result;
}

// Sheet 2: Count 1s in binary representation
int countOnes(unsigned int n) {
    int count = 0;
    while (n) { count += n & 1; n >>= 1; }
    return count;
}

// Sheet 5: Find missing number in O(n)
int findMissing(int arr[], int n) {
    int expected = (n + 1) * (n + 2) / 2;
    int actual = 0;
    for (int i = 0; i < n; i++) actual += arr[i];
    return expected - actual;
}
```

---

## 🛠️ Tech Stack

| Component | Choice | Reason |
|-----------|--------|--------|
| **IDE** | Visual Studio 2022 | Best debugging, IntelliSense |
| **Compiler** | MSVC / GCC 14.2 | Industry standard |
| **Standard** | C++17 | Modern features, stable |
| **Build** | CMake / MSBuild | Cross-platform capability |
| **Debugger** | Visual Studio / GDB | Memory analysis |

---

## 📊 Key Features Implemented

### Algorithms & Data Manipulation
- [x] Pattern printing (pyramids, diamonds, triangles)
- [x] Prime number checker (optimized)
- [x] Factorial & Fibonacci (iterative + recursive)
- [x] Digit manipulation (sum, reverse, count)
- [ ] String algorithms (reverse, mirror, word reversal)
- [ ] Bitwise operations (set, clear, toggle, read bits)
- [ ] Array algorithms (merge, swap, consecutive count)

### Engineering Concepts
- [x] Loop optimization techniques
- [x] Function modularization
- [ ] Memory-efficient algorithms (O(n) space)
- [ ] Time complexity optimization
- [ ] Pointer arithmetic for arrays

---

## 🔗 CodeBricks Ecosystem

This repository is part of the larger **CodeBricks** learning initiative:

| Repository | Description | Status |
|------------|-------------|--------|
| **[CodeBricks-CPP](https://github.com/AbdelRahman-Madboly/CodeBricks-CPP)** | C++ Systems Foundation | 🟢 Active |
| **[CodeBricks-Python-AI](https://github.com/AbdelRahman-Madboly/CodeBricks-Python-AI)** | Python AI/ML from scratch | 🟡 Upcoming |
| **[CodeBricks-CV-Core](https://github.com/AbdelRahman-Madboly/CodeBricks-CV-Core)** | Computer Vision modules | 🔴 Planned |

---

## 📚 Learning Resources

### Books (Recommended Order)
1. **"C++ Primer"** by Lippman — Comprehensive foundation
2. **"Effective Modern C++"** by Meyers — Modern best practices
3. **"Data Structures in C++"** by Goodrich — Algorithmic depth

### Online References
- [cppreference.com](https://en.cppreference.com/) — Definitive C++ reference
- [Compiler Explorer](https://godbolt.org/) — See assembly output
- [roadmap.sh/cpp](https://roadmap.sh/cpp) — Visual learning path

---

## 👤 Author

**Abdel Rahman Madboly**  
AI & Computer Vision Engineer | Embedded Systems Specialist

- **GitHub:** [@AbdelRahman-Madboly](https://github.com/AbdelRahman-Madboly)
- **LinkedIn:** [abdllrhmh](https://www.linkedin.com/in/abdllrhmh)
- **Email:** abdelrahmanmadboly25@gmail.com

---

## 📄 License

This project is open source under the [MIT License](LICENSE).

---

<p align="center">
  <strong>🧱 Built brick by brick. No shortcuts. Real engineering.</strong>
</p>

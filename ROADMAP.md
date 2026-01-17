# 🗺️ CodeBricks-CPP: Complete Learning Roadmap

> **Timeline:** 12-16 weeks (part-time, ~10-15 hours/week)  
> **Goal:** Master C++ systems programming for AI/CV applications  
> **Current Position:** Part 03 - Functions 🔄

---

## 📋 Table of Contents

1. [Phase Overview](#-phase-overview)
2. [Phase 1: Procedural Foundation](#-phase-1-procedural-foundation-weeks-1-4)
3. [Phase 2: Memory & Pointers](#-phase-2-memory--pointers-weeks-5-8)
4. [Phase 3: Object-Oriented Programming](#-phase-3-object-oriented-programming-weeks-9-11)
5. [Phase 4: Modern C++ & STL](#-phase-4-modern-c--stl-weeks-12-14)
6. [Phase 5: Integration Projects](#-phase-5-integration-projects-weeks-15-16)
7. [Problem Sheet Integration](#-problem-sheet-integration)
8. [Milestone Checkpoints](#-milestone-checkpoints)

---

## 📊 Phase Overview

```
┌─────────────────────────────────────────────────────────────────────────────┐
│                        THE CODEBRICKS C++ JOURNEY                           │
├─────────────────────────────────────────────────────────────────────────────┤
│                                                                             │
│  PHASE 1           PHASE 2            PHASE 3           PHASE 4            │
│  ════════          ════════           ════════          ════════           │
│  Procedural        Memory &           OOP               Modern C++         │
│  Foundation        Pointers           Engineering       & STL              │
│                                                                             │
│  [██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░]       │
│       ▲                                                                     │
│       │                                                                     │
│       └── YOU ARE HERE (Part 03: Functions)                                 │
│                                                                             │
│  Weeks 1-4         Weeks 5-8          Weeks 9-11        Weeks 12-14        │
│                                                                             │
│  Sheets: 1, 2      Sheets: 3          Sheets: 4, 5      Projects           │
│                                                                             │
└─────────────────────────────────────────────────────────────────────────────┘
```

---

## 🟢 Phase 1: Procedural Foundation (Weeks 1-4)

> **Objective:** Build the mental model of how C++ handles data and control flow

### Part 01: C++ Fundamentals ✅ COMPLETED

| Topic | Key Concepts | Practice |
|-------|-------------|----------|
| Variables & DataTypes | `int`, `float`, `double`, `char`, `bool`, `sizeof()` | Print sizes of all types |
| Arithmetic & Priorities | Precedence (`* / %` before `+ -`), brackets | Calculator without parentheses |
| Casting | Explicit `(int)3.5` vs Implicit conversion | Type conversion exercises |
| Scope | Local vs Global, variable lifecycle | Trace variable lifetime |
| Prefix vs Postfix | `++x` vs `x++` critical difference | Increment puzzles |

**Key Deliverable:** Understand that `int x = 5;` allocates 4 bytes on the stack.

---

### Part 02: Control Flow ✅ COMPLETED

| Topic | Key Concepts | Practice |
|-------|-------------|----------|
| Conditionals | `if/else`, `switch`, ternary `? :` | Menu-driven programs |
| For Loops | Counter-based iteration | Pattern printing |
| While/Do-While | Condition-based iteration | Input validation |
| Flow Control | `break`, `continue`, nested loops | Matrix traversal |

**Key Deliverable:** Print pyramid patterns with nested loops.

**Problem Sheet Reference:** Sheet 1 (Problems 1-13)

---

### Part 03: Functions 🔄 CURRENT

| Topic | Key Concepts | Practice |
|-------|-------------|----------|
| Function Anatomy | Return type, name, parameters | Refactor code into functions |
| Declaration vs Definition | Prototypes before `main()` | Header organization |
| Return Types | `void`, `int`, `double`, returning values | Calculator with functions |
| Parameters | Pass-by-value, const parameters | Swap function (why it fails) |
| Recursion | Base case, recursive case, stack depth | Factorial, Fibonacci |

**Key Deliverable:** Implement Tower of Hanoi and trace the call stack.

```cpp
// Recursion Example: Factorial
int factorial(int n) {
    if (n <= 1) return 1;        // Base case
    return n * factorial(n - 1); // Recursive case
}

// Stack Visualization for factorial(4):
// │ factorial(1) │ ← returns 1
// │ factorial(2) │ ← returns 2 * 1 = 2
// │ factorial(3) │ ← returns 3 * 2 = 6
// │ factorial(4) │ ← returns 4 * 6 = 24
// └──────────────┘
```

**Problem Sheet Reference:** Sheet 1 (Problems 6-10), Sheet 3 (Problem 16)

---

### Part 04: Arrays & Strings ⏳ NEXT

| Topic | Key Concepts | Practice |
|-------|-------------|----------|
| Static Arrays | Declaration, initialization, contiguous memory | Array reversal |
| Array Iteration | Index-based access, bounds checking | Find max/min |
| 2D Arrays | Matrix representation, row-major order | Matrix operations |
| C-Strings | `char[]`, null terminator `\0` | String manipulation |
| String Functions | Manual implementation without `<cstring>` | strlen, strcpy, strrev |

**Key Insight:** `arr[i]` is syntactic sugar for `*(arr + i)`

**Problem Sheet Reference:** Sheet 3 (all), Sheet 4 (all)

---

### Part 05: Complexity & Bitwise ⏳ PLANNED

| Topic | Key Concepts | Practice |
|-------|-------------|----------|
| Time Complexity | O(1), O(n), O(n²), O(log n) | Analyze existing code |
| Space Complexity | Stack space, auxiliary arrays | Memory-efficient solutions |
| Bitwise AND/OR/XOR | `&`, `|`, `^`, `~` | Bit manipulation problems |
| Bit Shifting | `<<`, `>>`, multiplication/division by 2 | Fast operations |
| Bit Manipulation | Set, clear, toggle, read specific bits | Full bit program |

**Problem Sheet Reference:** Sheet 2 (all), Sheet 5 (all)

```cpp
// Sheet 2 Example: Set/Clear/Toggle/Read Bit
void setBit(int& num, int pos)    { num |= (1 << pos); }
void clearBit(int& num, int pos)  { num &= ~(1 << pos); }
void toggleBit(int& num, int pos) { num ^= (1 << pos); }
bool readBit(int num, int pos)    { return (num >> pos) & 1; }
```

---

## 🟡 Phase 2: Memory & Pointers (Weeks 5-8)

> **Objective:** Master direct memory manipulation — the foundation of everything

### Part 06: Pointers Fundamentals

| Day | Topic | Key Concepts |
|-----|-------|-------------|
| 1-2 | Pointer Basics | Declaration, dereferencing `*`, address-of `&` |
| 3-4 | Pointer Arithmetic | Traverse arrays with pointers, `ptr++` |
| 5-6 | Pointers & Arrays | Array name as pointer, equivalence |
| 7 | void Pointers | Generic pointers, type casting |

```cpp
int x = 42;
int* ptr = &x;

// Memory Visualization:
// Address     Value      Variable
// 0x1000      42         x
// 0x1008      0x1000     ptr (stores address of x)

std::cout << ptr;   // → 0x1000 (address)
std::cout << *ptr;  // → 42 (value at address)
```

---

### Part 07: References

| Topic | Key Concepts | Practice |
|-------|-------------|----------|
| References vs Pointers | Alias vs address variable | Swap function comparison |
| const References | Read-only aliases | Function parameters |
| Return by Reference | Returning aliases | When and why |
| Dangling References | Lifetime issues | Anti-patterns |

```cpp
// Reference = alias (must be initialized, cannot be null)
int x = 10;
int& ref = x;  // ref IS x

// Pointer = address variable (can be null, can change)
int* ptr = &x; // ptr POINTS TO x
```

---

### Part 08: Dynamic Memory

| Topic | Key Concepts | Practice |
|-------|-------------|----------|
| Stack vs Heap | Automatic vs manual allocation | Memory diagrams |
| new/delete | Single object allocation | Leak-free patterns |
| new[]/delete[] | Array allocation | Dynamic arrays |
| Memory Leaks | Detection, prevention | Valgrind/AddressSanitizer |
| Smart Pointers | `unique_ptr`, `shared_ptr` | Modern C++ patterns |

```cpp
// STACK: Automatic lifetime, fast, limited
int arr[100];  // Lives until function returns

// HEAP: Manual lifetime, slower, large
int* arr = new int[100];  // Lives until YOU delete
delete[] arr;             // YOUR responsibility!
```

---

## 🔵 Phase 3: Object-Oriented Programming (Weeks 9-11)

> **Objective:** Learn OOP as an engineering tool, not just syntax

### Part 09: Classes & Objects

| Topic | Key Concepts |
|-------|-------------|
| Class Syntax | `class`, `struct`, members |
| Access Specifiers | `public`, `private`, `protected` |
| Constructors | Default, parameterized, initializer lists |
| Destructors | Resource cleanup, RAII |
| `this` Pointer | Self-reference, method chaining |

### Part 10: Inheritance & Polymorphism

| Topic | Key Concepts |
|-------|-------------|
| Single Inheritance | Base class, derived class |
| Virtual Functions | Runtime polymorphism, vtables |
| Abstract Classes | Pure virtual functions, interfaces |
| Multiple Inheritance | Diamond problem, virtual inheritance |

### Part 11: Operator Overloading

| Topic | Key Concepts |
|-------|-------------|
| Arithmetic Operators | `+`, `-`, `*`, `/` |
| Comparison Operators | `==`, `<`, `>` |
| Stream Operators | `<<`, `>>` |
| Assignment Operator | `=`, Rule of Three/Five |

---

## 🟣 Phase 4: Modern C++ & STL (Weeks 12-14)

> **Objective:** Master the Standard Template Library

### Part 12: Templates

| Topic | Key Concepts |
|-------|-------------|
| Function Templates | Generic functions |
| Class Templates | Generic containers |
| Template Specialization | Type-specific behavior |

### Part 13: STL Containers

| Container | Use Case |
|-----------|----------|
| `vector` | Dynamic array, most common |
| `array` | Fixed-size array |
| `list` | Doubly-linked list |
| `map` / `unordered_map` | Key-value pairs |
| `set` / `unordered_set` | Unique elements |

### Part 14: STL Algorithms

| Algorithm | Purpose |
|-----------|---------|
| `sort` | Sorting containers |
| `find` | Searching elements |
| `transform` | Applying functions |
| `accumulate` | Reducing to single value |

---

## 🔴 Phase 5: Integration Projects (Weeks 15-16)

### Project 1: Custom Matrix Class

Build a `cv::Mat`-like class:

```cpp
class Matrix {
    double* data;
    int rows, cols;
public:
    double& at(int r, int c);
    Matrix operator+(const Matrix& other);
    Matrix transpose();
    // Rule of Five...
};
```

### Project 2: Custom Vector Implementation

Build `std::vector` from scratch:

```cpp
template<typename T>
class Vector {
    T* data;
    size_t size_, capacity_;
public:
    void push_back(const T& value);
    void pop_back();
    T& operator[](size_t index);
    // Iterator support...
};
```

---

## 📝 Problem Sheet Integration

| Sheet | Topics | Curriculum Part | When to Solve |
|-------|--------|-----------------|---------------|
| **Sheet 1** | Loops, Factorial, Prime, Patterns | Part 02, 03 | After Control Flow |
| **Sheet 2** | Bitwise, Binary, Bit Manipulation | Part 05 | After Complexity |
| **Sheet 3** | Arrays, Functions, Pointers | Part 04, 06 | After Arrays |
| **Sheet 4** | String Manipulation | Part 04 | After Strings |
| **Sheet 5** | O(n) Algorithms, Optimization | Part 05 | After Complexity |

### Sheet Difficulty Progression

```
Sheet 1: ⭐ → ⭐⭐     (Beginner → Intermediate)
Sheet 2: ⭐⭐ → ⭐⭐⭐   (Intermediate → Advanced)
Sheet 3: ⭐⭐ → ⭐⭐⭐   (Intermediate → Advanced)
Sheet 4: ⭐⭐ → ⭐⭐⭐   (Intermediate → Advanced)
Sheet 5: ⭐⭐⭐         (Advanced - Optimization focus)
```

---

## 🎯 Milestone Checkpoints

### ✅ Checkpoint 1: "I Can Code" (After Part 03)
- [ ] Write any algorithm without syntax lookup
- [ ] Debug with print statements effectively
- [ ] Trace recursion on paper
- [ ] Solve Sheet 1 problems independently

### ⏳ Checkpoint 2: "I Understand Memory" (After Part 08)
- [ ] Draw memory diagrams for any code
- [ ] Write leak-free dynamic allocations
- [ ] Debug segfaults systematically
- [ ] Solve Sheet 2, 3 problems

### ⏳ Checkpoint 3: "I Engineer OOP" (After Part 11)
- [ ] Design classes with SOLID principles
- [ ] Implement Rule of Five correctly
- [ ] Understand virtual function overhead
- [ ] Solve Sheet 4, 5 problems

### ⏳ Checkpoint 4: "I Am Ready" (After Phase 5)
- [ ] Complete Matrix class project
- [ ] Complete Vector implementation
- [ ] Confidence in systems programming
- [ ] Ready for CodeBricks-Python-AI

---

## ⏱️ Time Investment Summary

| Phase | Weeks | Topics | Hours |
|-------|-------|--------|-------|
| Phase 1 | 1-4 | Procedural Foundation | 40-60 |
| Phase 2 | 5-8 | Memory & Pointers | 40-60 |
| Phase 3 | 9-11 | OOP | 30-45 |
| Phase 4 | 12-14 | Modern C++ & STL | 30-45 |
| Phase 5 | 15-16 | Projects | 20-30 |
| **Total** | **16** | - | **160-240** |

---

## 🔄 Transition to Python-AI

After completing CodeBricks-CPP:

| C++ Skill | Python-AI Application |
|-----------|----------------------|
| Memory management | PyTorch tensor operations |
| Pointers | NumPy array views vs copies |
| OOP | `nn.Module` architecture |
| Templates | Python duck typing |
| Complexity analysis | Model optimization |

---

<p align="center">
  <strong>🧱 One brick at a time. No shortcuts.</strong>
</p>

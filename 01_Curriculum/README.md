# 📚 01_Curriculum

> **Purpose:** Step-by-step lessons organized by topic, building from fundamentals to advanced concepts

---

## 📂 Structure

```
01_Curriculum/
│
├── 📁 Part_01_Fundamentals/     ✅ Completed
│   ├── README.md                # Part overview & objectives
│   ├── 📁 lessons/              # Concept implementations
│   │   ├── 01_variables.cpp
│   │   ├── 02_datatypes.cpp
│   │   ├── 03_operators.cpp
│   │   └── ...
│   └── 📁 exercises/            # Practice problems
│       ├── swap_numbers.cpp
│       └── circle_area.cpp
│
├── 📁 Part_02_Control_Flow/     ✅ Completed
│   ├── README.md
│   ├── 📁 lessons/
│   └── 📁 exercises/
│
├── 📁 Part_03_Functions/        🔄 In Progress
│   ├── README.md
│   ├── 📁 lessons/
│   └── 📁 exercises/
│
├── 📁 Part_04_Arrays_Strings/   ⏳ Next
├── 📁 Part_05_Complexity/       ⏳ Planned
├── 📁 Part_06_Pointers/         ⏳ Planned
├── 📁 Part_07_References/       ⏳ Planned
├── 📁 Part_08_Dynamic_Memory/   ⏳ Planned
├── 📁 Part_09_Classes/          ⏳ Planned
├── 📁 Part_10_Inheritance/      ⏳ Planned
├── 📁 Part_11_Operators/        ⏳ Planned
├── 📁 Part_12_Templates/        ⏳ Planned
├── 📁 Part_13_STL_Containers/   ⏳ Planned
└── 📁 Part_14_STL_Algorithms/   ⏳ Planned
```

---

## 🗺️ Curriculum Overview

### Phase 1: Procedural Foundation

| Part | Topic | Status | Key Concepts |
|------|-------|--------|--------------|
| **01** | Fundamentals | ✅ | Variables, Types, Scope, Casting |
| **02** | Control Flow | ✅ | Loops, Conditions, Switch, Patterns |
| **03** | Functions | 🔄 | Parameters, Return, Recursion |
| **04** | Arrays & Strings | ⏳ | Contiguous Memory, C-Strings |
| **05** | Complexity & Bitwise | ⏳ | Big-O, Bit Manipulation |

### Phase 2: Memory & Pointers

| Part | Topic | Status | Key Concepts |
|------|-------|--------|--------------|
| **06** | Pointers | ⏳ | Addresses, Dereferencing, Arithmetic |
| **07** | References | ⏳ | Aliases, Pass-by-Reference |
| **08** | Dynamic Memory | ⏳ | Heap, new/delete, Smart Pointers |

### Phase 3: Object-Oriented Programming

| Part | Topic | Status | Key Concepts |
|------|-------|--------|--------------|
| **09** | Classes | ⏳ | Encapsulation, Constructors, RAII |
| **10** | Inheritance | ⏳ | Polymorphism, Virtual Functions |
| **11** | Operator Overloading | ⏳ | Custom Operators, Rule of Five |

### Phase 4: Modern C++ & STL

| Part | Topic | Status | Key Concepts |
|------|-------|--------|--------------|
| **12** | Templates | ⏳ | Generic Programming, Specialization |
| **13** | STL Containers | ⏳ | Vector, Map, Set |
| **14** | STL Algorithms | ⏳ | Sort, Find, Transform |

---

## 📖 Part Structure

Each Part folder follows this consistent structure:

```
Part_XX_Topic/
│
├── README.md           # Overview, objectives, topics, exercises
│
├── 📁 lessons/         # Concept implementations (learn by doing)
│   ├── 01_concept_a.cpp
│   ├── 02_concept_b.cpp
│   └── ...
│
└── 📁 exercises/       # Practice problems
    ├── problem_1.cpp
    ├── problem_2.cpp
    └── ...
```

### README.md Template

Each Part README contains:
- 🎯 **Objectives** — What you'll learn
- 📚 **Topics Covered** — Detailed topic list
- 🧪 **Key Exercises** — Important practice problems
- 🧠 **Interview Notes** — Common interview questions
- ✅ **Status** — Completed / In Progress / Planned

---

## 🎯 Learning Approach

### For Each Part:

1. **Read README.md** — Understand objectives
2. **Study lessons/** — Work through each concept file
3. **Complete exercises/** — Solve practice problems
4. **Review** — Check interview notes

### Coding Standards

```cpp
// ✅ DO: Use explicit namespaces
std::cout << "Hello";

// ❌ DON'T: Use namespace pollution
using namespace std;  // Avoid this

// ✅ DO: Meaningful variable names
int studentCount = 42;

// ❌ DON'T: Cryptic names
int n = 42;

// ✅ DO: Always use braces
if (condition) {
    doSomething();
}

// ❌ DON'T: Skip braces
if (condition) doSomething();  // Error-prone
```

---

## 📊 Progress Tracking

### Current Status

| Part | Progress | Lessons | Exercises |
|------|----------|---------|-----------|
| Part 01 | ██████████ 100% | 5/5 | 3/3 |
| Part 02 | ██████████ 100% | 6/6 | 5/5 |
| Part 03 | ██████░░░░ 60% | 4/6 | 2/4 |
| Part 04 | ░░░░░░░░░░ 0% | 0/8 | 0/6 |

---

## 🔗 Related Problem Sheets

| Part | Problem Sheet | Focus |
|------|---------------|-------|
| Part 02, 03 | Sheet 1 | Loops, Factorial, Patterns |
| Part 05 | Sheet 2 | Bitwise Operations |
| Part 04, 06 | Sheet 3 | Arrays, Pointers |
| Part 04 | Sheet 4 | String Manipulation |
| Part 05 | Sheet 5 | O(n) Algorithms |

---

## 📚 How to Navigate

1. **New to C++?** Start with [Part_01_Fundamentals](Part_01_Fundamentals/)
2. **Know basics?** Review [Part_02_Control_Flow](Part_02_Control_Flow/) exercises
3. **Current focus?** Continue [Part_03_Functions](Part_03_Functions/)

---

<p align="center">
  <strong>🧱 Build your foundation brick by brick</strong>
</p>

# 📘 Part 01: C++ Fundamentals

<p align="center">
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=flat-square" alt="Status">
  <img src="https://img.shields.io/badge/Difficulty-Beginner-blue?style=flat-square" alt="Difficulty">
  <img src="https://img.shields.io/badge/Duration-1_Week-orange?style=flat-square" alt="Duration">
</p>

---

## 🎯 Objectives

By completing this part, you will:

- [x] Build the mental model of how C++ handles data and memory
- [x] Master strict typing and understand memory sizes
- [x] Understand variable scope and lifetime
- [x] Know the difference between implicit and explicit casting
- [x] Master prefix vs postfix increment behavior

---

## 📚 Topics Covered

### 1. Variables & Data Types

Understanding memory allocation and type sizes.

```cpp
// Fundamental types and their typical sizes
int    number   = 42;       // 4 bytes (-2B to +2B)
float  decimal  = 3.14f;    // 4 bytes (7 digits precision)
double precise  = 3.14159;  // 8 bytes (15 digits precision)
char   letter   = 'A';      // 1 byte (0-255 or -128-127)
bool   flag     = true;     // 1 byte (true/false)

// Check sizes on your machine
std::cout << "int: " << sizeof(int) << " bytes\n";
std::cout << "double: " << sizeof(double) << " bytes\n";
```

**Memory Visualization:**
```
int x = 42;

Memory Address    Binary Value              Decimal
0x00001000        00000000 00000000 00000000 00101010    →  42
                  |_______ 4 bytes (32 bits) ________|
```

### 2. Arithmetic & Operator Precedence

```cpp
// Precedence: () → * / % → + -
int result = 2 + 3 * 4;      // = 14 (not 20)
int result2 = (2 + 3) * 4;   // = 20

// Integer division truncates
int a = 7 / 2;    // = 3 (not 3.5)
double b = 7.0 / 2;  // = 3.5

// Modulo for remainder
int c = 7 % 2;    // = 1
```

### 3. Type Casting

```cpp
// Implicit (automatic) - compiler does it
int i = 3;
double d = i;     // 3.0 (safe: no data loss)

// Explicit (manual) - you control it
double pi = 3.14159;
int truncated = (int)pi;           // C-style: 3
int truncated2 = static_cast<int>(pi);  // C++ style: 3

// DANGER: Overflow
int big = 1000000;
char small = (char)big;  // Undefined behavior!
```

### 4. Scope & Lifetime

```cpp
int globalVar = 100;  // Global: exists entire program

void function() {
    int localVar = 50;  // Local: exists only in function
    
    {
        int blockVar = 25;  // Block: exists only in this {}
        // globalVar, localVar, blockVar all accessible
    }
    // blockVar is DESTROYED here
    
    // globalVar, localVar accessible
    // blockVar NOT accessible - compile error
}
// localVar is DESTROYED here
```

**Scope Diagram:**
```
┌────────────────────────────────────────────────┐
│ Global Scope                                   │
│   int globalVar = 100;                         │
│                                                │
│   ┌────────────────────────────────────────┐   │
│   │ Function Scope                         │   │
│   │   int localVar = 50;                   │   │
│   │                                        │   │
│   │   ┌────────────────────────────────┐   │   │
│   │   │ Block Scope                    │   │   │
│   │   │   int blockVar = 25;           │   │   │
│   │   │   ✓ globalVar, localVar,       │   │   │
│   │   │     blockVar all accessible    │   │   │
│   │   └────────────────────────────────┘   │   │
│   │   ✗ blockVar destroyed                 │   │
│   │   ✓ globalVar, localVar accessible     │   │
│   └────────────────────────────────────────┘   │
│   ✗ localVar destroyed                         │
│   ✓ globalVar accessible                       │
└────────────────────────────────────────────────┘
```

### 5. Prefix vs Postfix Increment

```cpp
int x = 5;

// Postfix: returns OLD value, THEN increments
int a = x++;  // a = 5, x = 6

// Prefix: increments FIRST, THEN returns NEW value
int b = ++x;  // x = 7, b = 7

// INTERVIEW TRAP:
int y = 5;
std::cout << y++ << " " << y;  // Undefined behavior!
// Don't modify and use same variable in one statement
```

**Step-by-Step Visualization:**
```
int x = 5;

x++              ++x
─────            ─────
Step 1: Return 5 Step 1: x = x + 1 = 6
Step 2: x = 6    Step 2: Return 6
```

---

## 📂 Folder Structure

```
Part_01_Fundamentals/
│
├── README.md                    # This file
│
├── 📁 lessons/
│   ├── 01_variables.cpp         # Variable declarations
│   ├── 02_datatypes.cpp         # Type sizes and ranges
│   ├── 03_operators.cpp         # Arithmetic operations
│   ├── 04_casting.cpp           # Type conversions
│   └── 05_scope.cpp             # Variable scope demo
│
└── 📁 exercises/
    ├── swap_numbers.cpp         # Swap using temp variable
    ├── ascii_value.cpp          # Print char as int
    └── circle_area.cpp          # Area with const PI
```

---

## 🧪 Key Exercises

### Exercise 1: Swap Two Numbers

```cpp
// TODO: Swap a and b using a temporary variable
int a = 5, b = 10;
// Your code here...
// Expected: a = 10, b = 5
```

<details>
<summary>💡 Solution</summary>

```cpp
int temp = a;
a = b;
b = temp;
```
</details>

### Exercise 2: ASCII Value

```cpp
// TODO: Print the ASCII value of a character
char ch = 'A';
// Your code here...
// Expected output: 65
```

<details>
<summary>💡 Solution</summary>

```cpp
std::cout << (int)ch << std::endl;
// or: std::cout << static_cast<int>(ch) << std::endl;
```
</details>

### Exercise 3: Circle Area

```cpp
// TODO: Calculate area using const PI
const double PI = 3.14159;
double radius = 5.0;
// Your code here...
// Expected: Area = 78.5398 (approximately)
```

<details>
<summary>💡 Solution</summary>

```cpp
double area = PI * radius * radius;
std::cout << "Area = " << area << std::endl;
```
</details>

---

## 🧠 Interview Notes

### Common Questions

1. **"What is the difference between `float` and `double`?"**
   - `float`: 4 bytes, ~7 digits precision
   - `double`: 8 bytes, ~15 digits precision
   - Use `double` by default for accuracy

2. **"Explain `x++` vs `++x`"**
   - `x++` (postfix): Returns old value, then increments
   - `++x` (prefix): Increments first, returns new value
   - Prefer `++x` in loops (slight performance benefit)

3. **"What happens if you overflow an `int`?"**
   - **Signed overflow**: Undefined behavior (anything can happen)
   - **Unsigned overflow**: Wraps around (defined behavior)

4. **"What is the scope of a variable?"**
   - The region of code where the variable is accessible
   - Local variables exist only in their block `{}`
   - Destroyed when block ends (RAII principle)

### Gotchas to Remember

```cpp
// 1. Integer division truncates
int result = 5 / 2;  // = 2, not 2.5

// 2. Char is actually a small integer
char c = 65;         // c = 'A'
char d = 'A' + 1;    // d = 'B'

// 3. Uninitialized variables have garbage
int x;               // x = ??? (garbage value)
std::cout << x;      // Undefined behavior!

// 4. const must be initialized
const int MAX;       // ERROR!
const int MAX = 100; // Correct
```

---

## ✅ Completion Checklist

Before moving to Part 02, ensure you can:

- [ ] Declare variables of all basic types
- [ ] Explain what `sizeof()` returns and why
- [ ] Convert between types (safely and unsafely)
- [ ] Predict the output of increment expressions
- [ ] Draw scope diagrams for nested blocks
- [ ] Explain why uninitialized variables are dangerous

---

## 🔗 Next Steps

**Completed Part 01?** Continue to:
→ [Part 02: Control Flow](../Part_02_Control_Flow/README.md)

---

<p align="center">
  <strong>🧱 Foundation complete. You understand how C++ stores data.</strong>
</p>

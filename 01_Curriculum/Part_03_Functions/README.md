# 📙 Part 03: Functions

<p align="center">
  <img src="https://img.shields.io/badge/Status-In_Progress-yellow?style=flat-square" alt="Status">
  <img src="https://img.shields.io/badge/Difficulty-Beginner/Intermediate-blue?style=flat-square" alt="Difficulty">
  <img src="https://img.shields.io/badge/Duration-1.5_Weeks-orange?style=flat-square" alt="Duration">
</p>

---

## 🎯 Objectives

By completing this part, you will:

- [x] Modularize code into reusable logic blocks
- [x] Understand the "Black Box" concept (inputs → processing → output)
- [x] Master function declaration vs definition
- [ ] Understand pass-by-value and its limitations
- [ ] Master recursion and visualize the call stack
- [ ] Know when to use recursion vs iteration

---

## 📚 Topics Covered

### 1. Anatomy of a Function

```cpp
// Function Declaration (Prototype) - tells compiler "this exists"
int add(int a, int b);

// Function Definition - actual implementation
int add(int a, int b) {
    return a + b;
}

// Function Call - using the function
int result = add(5, 3);  // result = 8
```

**The "Black Box" Concept:**
```
┌─────────────────────────────────────────┐
│            FUNCTION                     │
│                                         │
│   INPUTS           PROCESS         OUTPUT
│   (Parameters) →   [Logic]    →    (Return)
│                                         │
│   int a = 5   →  { return   →     8    │
│   int b = 3       a + b; }             │
│                                         │
└─────────────────────────────────────────┘
```

### 2. Declaration vs Definition

```cpp
// Declaration (Prototype) - BEFORE main()
// Tells compiler: "This function exists, I'll define it later"
int multiply(int x, int y);  // Note: semicolon, no body

int main() {
    int result = multiply(4, 5);  // Can use before definition
    std::cout << result;          // 20
    return 0;
}

// Definition - AFTER main() or in another file
int multiply(int x, int y) {
    return x * y;
}
```

**Why use prototypes?**
- Organize code: `main()` at top, helpers below
- Split across files: headers (`.h`) have declarations, source (`.cpp`) has definitions
- Mutual recursion: functions that call each other

### 3. Return Types

```cpp
// void - returns nothing
void printHello() {
    std::cout << "Hello!";
    // No return statement needed (or use: return;)
}

// int - returns integer
int square(int n) {
    return n * n;
}

// double - returns floating point
double average(int a, int b) {
    return (a + b) / 2.0;  // Note: 2.0 for double division
}

// bool - returns true/false
bool isEven(int n) {
    return n % 2 == 0;
}

// Multiple values? Use references (Part 07) or struct (Part 09)
```

### 4. Parameters (Pass-by-Value)

```cpp
// Pass-by-value: COPIES the value
void increment(int x) {
    x++;  // Modifies the COPY
    std::cout << "Inside: " << x << "\n";  // 6
}

int main() {
    int num = 5;
    increment(num);
    std::cout << "Outside: " << num << "\n";  // Still 5!
    return 0;
}
```

**Visualization:**
```
BEFORE increment(num):
┌─────────┐     ┌─────────┐
│ num = 5 │     │         │
└─────────┘     └─────────┘
   main()       increment()

DURING increment(num):
┌─────────┐     ┌─────────┐
│ num = 5 │     │ x = 5   │  ← COPY created
└─────────┘     └─────────┘
   main()       increment()

AFTER x++ inside increment:
┌─────────┐     ┌─────────┐
│ num = 5 │     │ x = 6   │  ← Only copy changed
└─────────┘     └─────────┘
   main()       increment()

AFTER function returns:
┌─────────┐     ┌─────────┐
│ num = 5 │     │ [gone]  │  ← Copy destroyed
└─────────┘     └─────────┘
   main()
```

**Why doesn't swap work?**

```cpp
// ❌ WRONG - swaps copies, not originals
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    // x is still 5, y is still 10!
}

// ✅ FIX: Use references (Part 07) or pointers (Part 06)
void swap(int& a, int& b) {  // Reference parameters
    int temp = a;
    a = b;
    b = temp;
}
```

### 5. Recursion

A function that calls itself with a smaller problem.

#### The Two Essential Parts:

```cpp
int factorial(int n) {
    // 1. BASE CASE: Stops recursion
    if (n <= 1) {
        return 1;
    }
    
    // 2. RECURSIVE CASE: Calls itself with smaller input
    return n * factorial(n - 1);
}
```

#### Call Stack Visualization:

```
factorial(4) called:

CALL STACK (grows downward):
┌────────────────────────────┐
│ factorial(4)               │  ← Waiting for factorial(3)
│   return 4 * factorial(3)  │
├────────────────────────────┤
│ factorial(3)               │  ← Waiting for factorial(2)
│   return 3 * factorial(2)  │
├────────────────────────────┤
│ factorial(2)               │  ← Waiting for factorial(1)
│   return 2 * factorial(1)  │
├────────────────────────────┤
│ factorial(1)               │  ← BASE CASE! Returns 1
│   return 1                 │
└────────────────────────────┘

UNWINDING (returns propagate up):
factorial(1) returns 1
factorial(2) returns 2 * 1 = 2
factorial(3) returns 3 * 2 = 6
factorial(4) returns 4 * 6 = 24

Final result: 24
```

#### Common Recursive Patterns:

```cpp
// Fibonacci (multiple recursive calls)
int fibonacci(int n) {
    if (n <= 1) return n;  // Base cases: fib(0)=0, fib(1)=1
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Sum of digits
int sumDigits(int n) {
    if (n == 0) return 0;  // Base case
    return (n % 10) + sumDigits(n / 10);
}

// Power function
int power(int base, int exp) {
    if (exp == 0) return 1;  // Base case
    return base * power(base, exp - 1);
}

// Print numbers 1 to n
void printNumbers(int n) {
    if (n == 0) return;  // Base case
    printNumbers(n - 1); // Recursive call FIRST
    std::cout << n << " ";  // Then print (for ascending order)
}
```

#### Recursion vs Iteration:

| Aspect | Recursion | Iteration |
|--------|-----------|-----------|
| Memory | Uses call stack (can overflow) | Constant memory |
| Readability | Often cleaner for trees/graphs | Better for simple loops |
| Speed | Function call overhead | Generally faster |
| When to use | Tree traversal, divide-and-conquer | Counting, simple sequences |

### 6. Clean Code Principles

```cpp
// ✅ DO: Functions do ONE thing
int calculateArea(int length, int width) {
    return length * width;
}

// ❌ DON'T: Functions do multiple things
int calculateAndPrintAndValidate(int l, int w) {
    if (l < 0 || w < 0) { /* validation */ }
    int area = l * w;
    std::cout << "Area: " << area;  // side effect
    return area;
}

// ✅ DO: Meaningful names
bool isValidAge(int age) { return age >= 0 && age <= 150; }

// ❌ DON'T: Cryptic names
bool check(int n) { return n >= 0 && n <= 150; }

// ✅ DO: Small functions (< 20 lines ideally)
// ❌ DON'T: 100+ line functions
```

---

## 📂 Folder Structure

```
Part_03_Functions/
│
├── README.md                    # This file
│
├── 📁 lessons/
│   ├── 01_function_basics.cpp   # Declaration, definition, call
│   ├── 02_return_types.cpp      # void, int, double, bool
│   ├── 03_parameters.cpp        # Pass-by-value limitations
│   ├── 04_recursion_intro.cpp   # Factorial, base case
│   ├── 05_recursion_examples.cpp # Fibonacci, sum digits
│   └── 06_recursion_vs_iteration.cpp
│
└── 📁 exercises/
    ├── max_of_three.cpp         # Return max of 3 numbers
    ├── power_function.cpp       # Calculate x^y
    ├── triangle_type.cpp        # Equilateral/Isosceles/Scalene
    ├── factorial.cpp            # Iterative AND recursive
    ├── fibonacci.cpp            # With memoization
    └── tower_of_hanoi.cpp       # Classic recursion
```

---

## 🧪 Key Exercises

### Exercise 1: Max of Three Numbers

```cpp
// TODO: Return the maximum of three integers
int maxOfThree(int a, int b, int c);
// Example: maxOfThree(5, 9, 3) returns 9
```

<details>
<summary>💡 Solution</summary>

```cpp
int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
```
</details>

### Exercise 2: Power Function (No Built-ins)

```cpp
// TODO: Calculate base^exp without using pow()
long long power(int base, int exp);
// Example: power(2, 10) returns 1024
```

<details>
<summary>💡 Solution (Iterative)</summary>

```cpp
long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
```
</details>

<details>
<summary>💡 Solution (Recursive)</summary>

```cpp
long long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}
```
</details>

### Exercise 3: Triangle Type Checker

```cpp
// TODO: Return triangle type given 3 sides
std::string triangleType(int a, int b, int c);
// Returns: "Equilateral", "Isosceles", "Scalene", or "Not a triangle"
```

<details>
<summary>💡 Solution</summary>

```cpp
std::string triangleType(int a, int b, int c) {
    // Triangle inequality: sum of any two sides > third side
    if (a + b <= c || b + c <= a || a + c <= b) {
        return "Not a triangle";
    }
    
    if (a == b && b == c) {
        return "Equilateral";
    } else if (a == b || b == c || a == c) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}
```
</details>

### Exercise 4: Recursive Fibonacci

```cpp
// TODO: Return nth Fibonacci number
// 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
int fibonacci(int n);
// Example: fibonacci(6) returns 8
```

<details>
<summary>💡 Solution (Basic)</summary>

```cpp
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// Warning: O(2^n) - very slow for large n!
```
</details>

<details>
<summary>💡 Solution (Optimized with Memoization)</summary>

```cpp
int memo[100] = {0};  // Cache results

int fibonacci(int n) {
    if (n <= 1) return n;
    if (memo[n] != 0) return memo[n];  // Return cached
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}
// O(n) - much faster!
```
</details>

---

## 📝 Problem Sheet Reference

**Sheet 1** problems that use Functions:

| Problem | Concept | Difficulty |
|---------|---------|------------|
| 6. Power function | Function + loop | ⭐⭐ |
| 7. Factorial | Iterative or recursive | ⭐⭐ |
| 8. Prime checker | Function returning bool | ⭐⭐ |

**Sheet 3** problems that use Functions:

| Problem | Concept | Difficulty |
|---------|---------|------------|
| 16. Fibonacci nth term | Recursion | ⭐⭐ |
| 3. Power of 3 checker | Function returning 0/1 | ⭐⭐ |

---

## 🧠 Interview Notes

### Common Questions

1. **"What is recursion?"**
   - A function that calls itself
   - Must have: base case (termination) + recursive case
   - Uses the call stack for state

2. **"What causes stack overflow in recursion?"**
   - Too many nested calls (deep recursion)
   - Missing or unreachable base case
   - Stack memory is limited (~1MB typical)

3. **"When use recursion vs iteration?"**
   - Recursion: Trees, graphs, divide-and-conquer, backtracking
   - Iteration: Simple counting, performance-critical, large N

4. **"What is tail recursion?"**
   - Recursive call is the LAST operation
   - Can be optimized by compiler (tail call optimization)
   - C++ doesn't guarantee TCO, but good to know

   ```cpp
   // NOT tail recursive (multiplication after call)
   int factorial(int n) {
       if (n <= 1) return 1;
       return n * factorial(n - 1);  // Multiply AFTER return
   }

   // Tail recursive (call is last operation)
   int factorial_tail(int n, int acc = 1) {
       if (n <= 1) return acc;
       return factorial_tail(n - 1, n * acc);  // Call IS the return
   }
   ```

5. **"What is pass-by-value vs pass-by-reference?"**
   - Pass-by-value: Function gets a COPY
   - Pass-by-reference: Function gets the ORIGINAL
   - References covered in Part 07

### Common Mistakes

```cpp
// 1. Missing return statement
int add(int a, int b) {
    int sum = a + b;
    // FORGOT: return sum;
}  // Undefined behavior!

// 2. Wrong base case in recursion
int factorial(int n) {
    if (n == 1) return 1;  // Bug: factorial(0) infinite!
    return n * factorial(n - 1);
}
// Fix: if (n <= 1) return 1;

// 3. Expecting pass-by-value to modify original
void increment(int x) { x++; }
int main() {
    int n = 5;
    increment(n);  // n is STILL 5
}

// 4. Infinite recursion (no progress toward base case)
int bad(int n) {
    if (n == 0) return 0;
    return bad(n);  // n never changes!
}
```

---

## ✅ Completion Checklist

Before moving to Part 04, ensure you can:

- [ ] Write functions with appropriate return types
- [ ] Use function prototypes correctly
- [ ] Explain why pass-by-value doesn't modify originals
- [ ] Implement factorial both iteratively and recursively
- [ ] Trace a recursive call stack on paper
- [ ] Identify and fix missing base cases
- [ ] Know when recursion is appropriate

---

## 🔗 Next Steps

**Completed Part 03?** Continue to:
→ [Part 04: Arrays & Strings](../Part_04_Arrays_Strings/README.md)

**Want to understand pass-by-reference?** Preview:
→ [Part 07: References](../Part_07_References/README.md)

**Need more recursion practice?** Try:
→ [Problem Sheet 3, Problem 16: Fibonacci](../../02_Problem_Solving/Sheet_03_Arrays/README.md)

---

<p align="center">
  <strong>🧱 Functions mastered. You can modularize and recurse.</strong>
</p>

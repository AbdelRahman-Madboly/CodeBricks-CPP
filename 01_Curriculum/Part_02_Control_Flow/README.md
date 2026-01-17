# 📗 Part 02: Control Flow

<p align="center">
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=flat-square" alt="Status">
  <img src="https://img.shields.io/badge/Difficulty-Beginner-blue?style=flat-square" alt="Difficulty">
  <img src="https://img.shields.io/badge/Duration-1_Week-orange?style=flat-square" alt="Duration">
</p>

---

## 🎯 Objectives

By completing this part, you will:

- [x] Control program execution path with conditionals
- [x] Master all three loop types and know when to use each
- [x] Understand flow control with `break` and `continue`
- [x] Build complex patterns with nested loops
- [x] Avoid infinite loop bugs

---

## 📚 Topics Covered

### 1. Conditional Statements

#### if / else if / else

```cpp
int score = 85;

if (score >= 90) {
    std::cout << "Grade: A";
} else if (score >= 80) {
    std::cout << "Grade: B";  // This executes
} else if (score >= 70) {
    std::cout << "Grade: C";
} else {
    std::cout << "Grade: F";
}
```

#### switch Statement

Better than if-else chains for discrete values:

```cpp
int choice;
std::cin >> choice;

switch (choice) {
    case 1:
        std::cout << "Option 1 selected";
        break;  // IMPORTANT: prevents fall-through
    case 2:
        std::cout << "Option 2 selected";
        break;
    case 3:
    case 4:  // Fall-through: 3 and 4 share same code
        std::cout << "Option 3 or 4 selected";
        break;
    default:
        std::cout << "Invalid option";
}
```

#### Ternary Operator

Compact conditional expression:

```cpp
int age = 20;

// Instead of:
std::string status;
if (age >= 18) {
    status = "Adult";
} else {
    status = "Minor";
}

// Use:
std::string status = (age >= 18) ? "Adult" : "Minor";
```

### 2. Loops (Iteration)

#### for Loop — When you know the count

```cpp
// Basic structure: for (init; condition; update)
for (int i = 0; i < 5; i++) {
    std::cout << i << " ";  // 0 1 2 3 4
}

// Count backwards
for (int i = 5; i > 0; i--) {
    std::cout << i << " ";  // 5 4 3 2 1
}

// Step by 2
for (int i = 0; i <= 10; i += 2) {
    std::cout << i << " ";  // 0 2 4 6 8 10
}
```

**Execution Flow:**
```
for (int i = 0; i < 3; i++)
     ─────────  ─────  ────
        │         │      │
        │         │      └── Step 3: Update (after body)
        │         └── Step 2: Check condition (before body)
        └── Step 1: Initialize (once)

Iteration 1: i=0 → check 0<3 ✓ → execute body → i++
Iteration 2: i=1 → check 1<3 ✓ → execute body → i++
Iteration 3: i=2 → check 2<3 ✓ → execute body → i++
Iteration 4: i=3 → check 3<3 ✗ → EXIT LOOP
```

#### while Loop — When condition determines continuation

```cpp
// Basic while
int count = 0;
while (count < 5) {
    std::cout << count << " ";  // 0 1 2 3 4
    count++;
}

// User input validation
int input;
std::cout << "Enter positive number: ";
std::cin >> input;

while (input <= 0) {
    std::cout << "Invalid! Try again: ";
    std::cin >> input;
}
```

#### do-while Loop — Execute at least once

```cpp
// Always runs body at least once
int input;
do {
    std::cout << "Enter password: ";
    std::cin >> input;
} while (input != 1234);
std::cout << "Access granted!";

// Even with false condition, body runs once
int x = 10;
do {
    std::cout << "This prints once";
} while (x < 5);  // Condition false, but body already ran
```

**When to use which:**

| Loop Type | Use When |
|-----------|----------|
| `for` | You know exactly how many iterations |
| `while` | Condition checked before any iteration |
| `do-while` | Body must execute at least once (e.g., menus) |

### 3. Flow Control

#### break — Exit immediately

```cpp
// Find first even number
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        std::cout << "First even: " << i;  // 2
        break;  // Exit loop immediately
    }
}
```

#### continue — Skip current iteration

```cpp
// Print odd numbers only
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        continue;  // Skip to next iteration
    }
    std::cout << i << " ";  // 1 3 5 7 9
}
```

### 4. Nested Loops & Patterns

#### Basic Nested Loop

```cpp
// Multiplication table
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        std::cout << i * j << " ";
    }
    std::cout << "\n";
}
// Output:
// 1 2 3
// 2 4 6
// 3 6 9
```

#### Pattern: Right Triangle

```cpp
// *
// **
// ***
// ****
// *****

int n = 5;
for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
        std::cout << "*";
    }
    std::cout << "\n";
}
```

#### Pattern: Pyramid

```cpp
//     *
//    ***
//   *****
//  *******
// *********

int n = 5;
for (int row = 1; row <= n; row++) {
    // Print spaces
    for (int space = 1; space <= n - row; space++) {
        std::cout << " ";
    }
    // Print stars
    for (int star = 1; star <= 2 * row - 1; star++) {
        std::cout << "*";
    }
    std::cout << "\n";
}
```

#### Pattern: Diamond

```cpp
//   *
//  ***
// *****
//  ***
//   *

int n = 3;
// Upper half (including middle)
for (int row = 1; row <= n; row++) {
    for (int space = 1; space <= n - row; space++) std::cout << " ";
    for (int star = 1; star <= 2 * row - 1; star++) std::cout << "*";
    std::cout << "\n";
}
// Lower half
for (int row = n - 1; row >= 1; row--) {
    for (int space = 1; space <= n - row; space++) std::cout << " ";
    for (int star = 1; star <= 2 * row - 1; star++) std::cout << "*";
    std::cout << "\n";
}
```

---

## 📂 Folder Structure

```
Part_02_Control_Flow/
│
├── README.md                    # This file
│
├── 📁 lessons/
│   ├── 01_if_else.cpp           # Conditional statements
│   ├── 02_switch.cpp            # Switch statement
│   ├── 03_for_loop.cpp          # For loop examples
│   ├── 04_while_loop.cpp        # While and do-while
│   ├── 05_break_continue.cpp    # Flow control
│   └── 06_nested_loops.cpp      # Nested loop patterns
│
└── 📁 exercises/
    ├── pyramid_pattern.cpp      # Print pyramid
    ├── factorial.cpp            # Calculate n!
    ├── prime_checker.cpp        # Check if prime
    ├── digit_sum.cpp            # Sum digits of number
    └── number_guessing.cpp      # Guessing game
```

---

## 🧪 Key Exercises

### Exercise 1: Pyramid Pattern

```cpp
// TODO: Print a pyramid of height n
int n = 5;
// Expected output:
//     *
//    ***
//   *****
//  *******
// *********
```

<details>
<summary>💡 Solution</summary>

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) std::cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) std::cout << "*";
    std::cout << "\n";
}
```
</details>

### Exercise 2: Factorial Calculator

```cpp
// TODO: Calculate factorial of n using a loop
int n = 5;
// Expected: 5! = 120
```

<details>
<summary>💡 Solution</summary>

```cpp
long long factorial = 1;
for (int i = 2; i <= n; i++) {
    factorial *= i;
}
std::cout << n << "! = " << factorial;
```
</details>

### Exercise 3: Prime Number Checker

```cpp
// TODO: Check if n is prime (optimized)
int n = 17;
// Expected: 17 is prime
```

<details>
<summary>💡 Solution</summary>

```cpp
bool isPrime = true;
if (n < 2) isPrime = false;
else {
    for (int i = 2; i * i <= n; i++) {  // Only check up to √n
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
}
std::cout << n << (isPrime ? " is prime" : " is not prime");
```
</details>

### Exercise 4: Sum of Digits

```cpp
// TODO: Sum all digits of a number
int n = 12345;
// Expected: 1 + 2 + 3 + 4 + 5 = 15
```

<details>
<summary>💡 Solution</summary>

```cpp
int sum = 0;
int temp = n;
while (temp > 0) {
    sum += temp % 10;  // Get last digit
    temp /= 10;        // Remove last digit
}
std::cout << "Sum of digits: " << sum;
```
</details>

---

## 📝 Problem Sheet Reference

**Sheet 1** problems that use Control Flow:

| Problem | Concept | Difficulty |
|---------|---------|------------|
| 1. Sum of range | For loop | ⭐ |
| 2. Max/Min finder | While loop, comparison | ⭐ |
| 6. Power calculation | For loop | ⭐⭐ |
| 7. Factorial | Loop multiplication | ⭐⭐ |
| 8. Prime checker | Optimized loop with break | ⭐⭐ |
| 11. Digit sum | While loop with modulo | ⭐⭐ |
| 13. Count holes | Switch or conditional | ⭐⭐⭐ |

---

## 🧠 Interview Notes

### Common Questions

1. **"What's the difference between `while` and `do-while`?"**
   - `while`: Checks condition first, may never execute
   - `do-while`: Executes body first, checks condition after
   - `do-while` always runs at least once

2. **"How do you avoid infinite loops?"**
   - Ensure loop variable changes toward termination
   - Check that condition can become false
   - Use debugger to trace iteration values

3. **"Why check only up to √n for prime numbers?"**
   - If `n = a × b` and both `a, b > √n`, then `a × b > n`
   - So at least one factor must be ≤ √n
   - Reduces O(n) to O(√n)

4. **"In embedded systems, when are infinite loops intentional?"**
   - Main loop: `while(1) { processInputs(); }` — never exits
   - Event-driven systems waiting for interrupts
   - But in general algorithms, they're bugs

### Common Mistakes

```cpp
// 1. Off-by-one error
for (int i = 0; i <= 5; i++)  // Runs 6 times (0,1,2,3,4,5)
for (int i = 0; i < 5; i++)   // Runs 5 times (0,1,2,3,4)

// 2. Infinite loop - forgetting to update
int i = 0;
while (i < 5) {
    std::cout << i;
    // FORGOT: i++;
}

// 3. Wrong operator in condition
for (int i = 10; i < 0; i--)  // Never executes! (10 < 0 is false)
for (int i = 10; i > 0; i--)  // Correct

// 4. Semicolon after for/while
for (int i = 0; i < 5; i++);  // Empty loop!
    std::cout << i;            // Runs once with i=5

// 5. Missing break in switch
switch (x) {
    case 1:
        doSomething();
        // FORGOT break; → falls through to case 2!
    case 2:
        doSomethingElse();
}
```

---

## ✅ Completion Checklist

Before moving to Part 03, ensure you can:

- [ ] Write any pattern using nested loops
- [ ] Choose the right loop type for a problem
- [ ] Optimize prime checking to O(√n)
- [ ] Extract digits from a number
- [ ] Trace through loops on paper
- [ ] Identify and fix infinite loop bugs

---

## 🔗 Next Steps

**Completed Part 02?** Continue to:
→ [Part 03: Functions](../Part_03_Functions/README.md)

**Want more practice?** Try:
→ [Problem Sheet 1](../../02_Problem_Solving/Sheet_01_Loops/README.md)

---

<p align="center">
  <strong>🧱 Control Flow mastered. You can direct program execution.</strong>
</p>

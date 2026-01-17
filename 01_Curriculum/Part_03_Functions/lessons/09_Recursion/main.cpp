/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 09 - Recursion
 * Part      : Part 03 - Functions
 * Purpose   : Understand recursion, how a function
 *             can call itself, and how recursion
 *             relies on the call stack.
 *
 * Notes:
 * - A recursive function must have:
 *   1) Base case (termination)
 *   2) Recursive case (self-call)
 * - Each recursive call creates a new stack frame
 * - Missing base case causes stack overflow
 *
 * Interview Hints:
 * - Recursion uses the call stack
 * - Always explain base case first
 *************************************************/

#include <iostream>

using namespace std;

// Function declaration
int factorial(int n);

int main()
{
    int number = 5;

    int result = factorial(number);

    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}

// Function definition (recursive)
int factorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
        return 1;

    // Recursive case
    return n * factorial(n - 1);
}

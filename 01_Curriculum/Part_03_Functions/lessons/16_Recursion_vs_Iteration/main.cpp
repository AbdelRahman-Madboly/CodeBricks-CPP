/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 15 - Recursion vs Iteration
 * Part      : Part 03 - Functions
 * Purpose   : Compare recursive and iterative
 *             approaches to solving the same problem.
 *
 * Notes:
 * - Recursion uses the call stack
 * - Iteration uses loops
 * - Both solve the same problems differently
 *
 * Interview Hints:
 * - Know when to prefer iteration
 * - Embedded systems favor iteration
 *************************************************/

#include <iostream>

using namespace std;

// Recursive factorial
int factorialRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorialRecursive(n - 1);
}

// Iterative factorial
int factorialIterative(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

int main()
{
    int number = 5;

    cout << "Recursive factorial: "
         << factorialRecursive(number) << endl;

    cout << "Iterative factorial: "
         << factorialIterative(number) << endl;

    return 0;
}

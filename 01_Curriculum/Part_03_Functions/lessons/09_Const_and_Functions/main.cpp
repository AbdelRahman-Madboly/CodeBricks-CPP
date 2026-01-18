/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 09 - Const and Functions
 * Part      : Part 03 - Functions
 * Purpose   : Understand how const is used with
 *             function parameters and return values
 *             to improve safety and correctness.
 *
 * Notes:
 * - const prevents accidental modification
 * - const is enforced at compile time
 * - const improves API design
 *
 * Interview Hints:
 * - Use const wherever modification is not required
 * - const references avoid copies
 *************************************************/

#include <iostream>

using namespace std;

// Function with const value parameter
int square(const int x);

// Function with const reference parameter
int sum(const int& a, const int& b);

int main()
{
    int a = 5;
    int b = 10;

    cout << "Square: " << square(a) << endl;
    cout << "Sum: " << sum(a, b) << endl;

    return 0;
}

int square(const int x)
{
    // x cannot be modified here
    return x * x;
}

int sum(const int& a, const int& b)
{
    // a and b are read-only references
    return a + b;
}

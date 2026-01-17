/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 07 - Pass by Value
 * Part      : Part 03 - Functions
 * Purpose   : Understand pass-by-value, how data
 *             is copied into functions, and why
 *             changes do NOT affect the caller.
 *
 * Notes:
 * - A copy of the argument is passed
 * - Parameters are independent variables
 * - Safer but can be inefficient for large data
 *
 * Interview Hint:
 * - Default parameter passing mechanism in C++
 *************************************************/

#include <iostream>

using namespace std;

// Function declaration
void increment(int x);

int main()
{
    int value = 10;

    cout << "Before function call: " << value << endl;

    increment(value);

    cout << "After function call: " << value << endl;

    return 0;
}

// Function definition
void increment(int x)
{
    x = x + 1;
    cout << "Inside function: " << x << endl;
}

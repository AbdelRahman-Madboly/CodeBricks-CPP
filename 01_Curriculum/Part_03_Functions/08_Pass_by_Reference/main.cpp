/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 08 - Pass by Reference
 * Part      : Part 03 - Functions
 * Purpose   : Learn how pass-by-reference allows
 *             functions to modify caller variables
 *             using references.
 *
 * Notes:
 * - Reference is an alias to original variable
 * - No copying occurs
 * - Changes affect the caller directly
 *
 * Interview Hint:
 * - Used for efficiency and modification
 *************************************************/

#include <iostream>

using namespace std;

// Function declaration
void increment(int& x);

int main()
{
    int value = 10;

    cout << "Before function call: " << value << endl;

    increment(value);

    cout << "After function call: " << value << endl;

    return 0;
}

// Function definition
void increment(int& x)
{
    x = x + 1;
    cout << "Inside function: " << x << endl;
}

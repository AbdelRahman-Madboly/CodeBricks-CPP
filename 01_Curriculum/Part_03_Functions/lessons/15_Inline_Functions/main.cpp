/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 12 - Inline Functions
 * Part      : Part 03 - Functions
 * Purpose   : Understand inline functions, how
 *             they reduce function call overhead,
 *             and when the compiler may ignore them.
 *
 * Notes:
 * - Inline is a request, not a command
 * - Inline functions are expanded at call site
 * - Best for small, frequently used functions
 *
 * Interview Hints:
 * - Inline reduces function call overhead
 * - Compiler may ignore inline for large functions
 *************************************************/

#include <iostream>

using namespace std;

// Inline function
inline int square(int x)
{
    return x * x;
}

int main()
{
    int value = 5;

    cout << "Square of " << value << " is: " << square(value) << endl;

    return 0;
}

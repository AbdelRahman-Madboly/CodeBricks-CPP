/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 05 - Built-in Functions
 * Part      : Part 03 - Functions
 * Purpose   : Understand what built-in (standard)
 *             functions are, how to use them, and
 *             how they differ from user-defined
 *             functions.
 *
 * Notes:
 * - Built-in functions are provided by the C++ standard library
 * - They are declared in header files
 * - They are already implemented and compiled
 * - Used exactly like user-defined functions
 *
 * Interview Hint:
 * - Built-in functions are not keywords
 * - They follow the same call stack rules
 *************************************************/

#include <iostream>
#include <cmath>    // For math functions like sqrt, pow
#include <cstdlib>  // For abs

using namespace std;

int main()
{
    int x = -9;
    double y = 16.0;

    int absoluteValue = abs(x);      // built-in function
    double squareRoot = sqrt(y);     // built-in function

    cout << "Absolute value: " << absoluteValue << endl;
    cout << "Square root: " << squareRoot << endl;

    return 0;
}

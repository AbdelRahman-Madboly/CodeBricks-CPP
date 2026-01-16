/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 02 - Function Declaration vs Definition
 * Part      : Part 03 - Functions
 * Purpose   : Understand the difference between
 *             function declaration (prototype)
 *             and function definition, and why
 *             the compiler requires both.
 *
 * Notes:
 * - Function declaration and function prototype
 *   mean the SAME thing in C++
 * - Declaration (prototype) tells the compiler
 *   WHAT exists (name, return type, parameters)
 * - Definition tells the compiler HOW it works
 * - Order matters unless a declaration is provided
 * - This concept is critical for header/source
 *   separation in real projects
 *
 * Interview Hint:
 * - A function can be declared many times
 * - A function must be defined exactly once
 *************************************************/

#include <iostream>

using namespace std;

/*
 * Function Declaration (Prototype)
 * --------------------------------
 * - No function body
 * - Ends with semicolon
 * - Informs the compiler about the function interface
 * - Enables calling the function before its definition
 */
int add(int a, int b);

int main()
{
    int result = add(3, 4);

    cout << "Result: " << result << endl;

    return 0;
}

/*
 * Function Definition
 * -------------------
 * - Contains the function body
 * - Provides actual implementation
 * - Memory and instructions are generated here
 */
int add(int a, int b)
{
    return a + b;
}

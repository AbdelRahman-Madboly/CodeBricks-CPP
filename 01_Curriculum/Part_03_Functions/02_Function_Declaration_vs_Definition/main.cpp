/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 02 - Function Declaration vs Definition
 * Part      : Part 03 - Functions
 * Purpose   : Understand the difference between
 *             function declaration and definition,
 *             and why the compiler requires both.
 *
 * Notes:
 * - Declaration tells the compiler "what exists"
 * - Definition tells the compiler "how it works"
 * - Order matters unless a declaration is provided
 * - This concept is critical for header/source separation
 *************************************************/

#include <iostream>

using namespace std;

// Function declaration (prototype)
int add(int a, int b);

int main()
{
    int result = add(3, 4);

    cout << "Result: " << result << endl;

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}

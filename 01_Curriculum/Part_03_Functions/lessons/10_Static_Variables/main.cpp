/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 10 - Static Variables
 * Part      : Part 03 - Functions
 * Purpose   : Understand static local variables,
 *             their lifetime, scope, and behavior
 *             inside functions.
 *
 * Notes:
 * - Static variables are initialized once
 * - Value is preserved between function calls
 * - Lifetime: entire program
 * - Scope: limited to the function
 *
 * Interview Hints:
 * - Static variables are NOT stored on the stack
 * - Useful for maintaining state inside functions
 *************************************************/

#include <iostream>

using namespace std;

void counter()
{
    static int count = 0; // Initialized once
    count++;
    cout << "Counter value: " << count << endl;
}

int main()
{
    counter(); // 1
    counter(); // 2
    counter(); // 3

    return 0;
}

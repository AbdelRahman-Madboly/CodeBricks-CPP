/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 04 - Parameters and Arguments
 * Part      : Part 03 - Functions
 * Purpose   : Understand how data is passed into
 *             functions using parameters and
 *             arguments, and how values flow
 *             through the call stack.
 *
 * Notes:
 * - Parameters are variables in the function definition
 * - Arguments are values passed during function call
 * - Argument values are copied into parameters
 * - Parameters live inside the function stack frame
 *************************************************/

#include <iostream>

using namespace std;

// Function declaration
void printSum(int x, int y);

int main()
{
    int a = 5;
    int b = 7;

    printSum(a, b);

    return 0;
}

// Function definition
void printSum(int x, int y)
{
    int result = x + y;
    cout << "Sum: " << result << endl;
}

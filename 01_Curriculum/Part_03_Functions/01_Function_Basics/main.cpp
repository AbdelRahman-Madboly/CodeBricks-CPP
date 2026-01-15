/*************************************************
 * File Name : main.cpp
 * Lesson    : 01 - Function Basics
 * Part      : Part 03 - Functions
 * Purpose   : Introduce the concept of functions,
 *             why they exist, and how to define
 *             and call a simple function in C++.
 *
 * Notes:
 * - Functions improve readability and reuse
 * - Functions execute only when called
 * - Execution returns to caller after completion
 *************************************************/

#include <iostream>
using namespace std;

/* -------- Function Declaration (Prototype) -------- */
void sayHello();

/* -------------- main Function --------------------- */
int main()
{
    cout << "Program started" << endl;

    sayHello();   // Function call

    cout << "Program ended" << endl;
    return 0;
}

/* -------- Function Definition --------------------- */
void sayHello()
{
    cout << "Hello from the function!" << endl;
}

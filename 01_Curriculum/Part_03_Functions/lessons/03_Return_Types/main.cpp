/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 03 - Function Return Types
 * Part      : Part 03 - Functions
 * Purpose   : Learn different function return types,
 *             how to return values, and how return
 *             affects program flow.
 *
 * Notes:
 * - A function can return a value or void
 * - Return type dictates what the caller receives
 * - Returning the wrong type causes compiler errors
 * - 'return' ends function execution immediately
 *************************************************/

#include <iostream>

using namespace std;

// Function declarations
int sum(int a, int b);
double average(int a, int b);
void printMessage();

int main()
{
    int a = 10, b = 20;

    // Integer return type
    int total = sum(a, b);
    cout << "Sum: " << total << endl;

    // Double return type
    double avg = average(a, b);
    cout << "Average: " << avg << endl;

    // Void return type
    printMessage();

    return 0;
}

// Function definitions

int sum(int a, int b)
{
    return a + b;  // returns an integer
}

double average(int a, int b)
{
    return (a + b) / 2.0;  // returns a double
}

void printMessage()
{
    cout << "This function returns nothing!" << endl;
    return;  // optional for void functions
}

/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 13 - Function Design Principles
 * Part      : Part 03 - Functions
 * Purpose   : Learn how to design clean, readable,
 *             maintainable functions.
 *
 * Notes:
 * - One function = one responsibility
 * - Clear input and output
 * - Avoid side effects
 *
 * Interview Hints:
 * - Interviewers care about how you design functions
 *************************************************/

#include <iostream>

using namespace std;

// Bad design: does multiple things
void processUserBad(int age)
{
    cout << "Age: " << age << endl;
    cout << "Age next year: " << age + 1 << endl;
}

// Good design: single responsibility
void printAge(int age)
{
    cout << "Age: " << age << endl;
}

int calculateNextYearAge(int age)
{
    return age + 1;
}

int main()
{
    int age = 20;

    // Bad approach
    processUserBad(age);

    cout << "------------------" << endl;

    // Good approach
    printAge(age);
    cout << "Age next year: " << calculateNextYearAge(age) << endl;

    return 0;
}

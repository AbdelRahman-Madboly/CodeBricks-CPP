/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 10 - Function Overloading
 * Part      : Part 03 - Functions
 * Purpose   : Understand function overloading,
 *             how the compiler differentiates
 *             functions with the same name,
 *             and how overload resolution works.
 *
 * Notes:
 * - Same function name, different parameter list
 * - Return type alone cannot overload functions
 * - Overloading is resolved at compile time
 *
 * Interview Hints:
 * - Function overloading is compile-time polymorphism
 * - Parameter count, type, or order must differ
 *************************************************/

#include <iostream>

using namespace std;

// Function overloads
int add(int a, int b);
double add(double a, double b);
int add(int a, int b, int c);

int main()
{
    int sum1 = add(2, 3);
    double sum2 = add(2.5, 3.5);
    int sum3 = add(1, 2, 3);

    cout << "add(int, int) = " << sum1 << endl;
    cout << "add(double, double) = " << sum2 << endl;
    cout << "add(int, int, int) = " << sum3 << endl;

    return 0;
}

// Definitions

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 11 - Default Arguments
 * Part      : Part 03 - Functions
 * Purpose   : Understand default function arguments,
 *             how the compiler substitutes missing
 *             values, and the rules governing their use.
 *
 * Notes:
 * - Default arguments are assigned at compile time
 * - Only trailing parameters can have default values
 * - Defaults are specified in the declaration
 *
 * Interview Hints:
 * - Default arguments reduce overloads
 * - Cannot skip arguments in the middle
 *************************************************/

#include <iostream>

using namespace std;

// Function declaration with default arguments
void printInfo(string name, int age = 18, string country = "Unknown");

int main()
{
    printInfo("Ahmed");
    printInfo("Ahmed", 25);
    printInfo("Ahmed", 25, "Egypt");

    return 0;
}

// Function definition (no defaults here)
void printInfo(string name, int age, string country)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
    cout << "----------------------" << endl;
}

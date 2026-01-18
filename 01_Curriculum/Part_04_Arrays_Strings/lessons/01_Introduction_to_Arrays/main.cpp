/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 01 - Introduction to Arrays
 * Part      : Part 04 - Arrays & Strings
 * Purpose   : Understand what arrays are, why
 *             they exist, and how they store
 *             multiple values in contiguous memory.
 *
 * Notes:
 * - Arrays store multiple values of same type
 * - Elements are stored contiguously in memory
 * - Array size is fixed at declaration
 *
 * Interview Hints:
 * - Arrays provide fast indexed access
 * - Array name represents base address (later)
 *************************************************/

#include <iostream>

using namespace std;

int main()
{
    // Declare an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array elements:" << endl;

    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;
    cout << numbers[3] << endl;
    cout << numbers[4] << endl;

    return 0;
}

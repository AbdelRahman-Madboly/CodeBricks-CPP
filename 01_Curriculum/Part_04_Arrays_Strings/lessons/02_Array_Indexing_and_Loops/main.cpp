/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 02 - Array Indexing and Loops
 * Part      : Part 04 - Arrays & Strings
 * Purpose   : Learn how to access array elements
 *             using indices and process arrays
 *             efficiently using loops.
 *
 * Notes:
 * - Array indices start from 0
 * - Last index = size - 1
 * - Loops are essential for array processing
 *
 * Interview Hints:
 * - Off-by-one errors are very common
 *************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numbers[5] = {5, 10, 15, 20, 25};

    cout << "Array elements using loop:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Index " << i << ": " << numbers[i] << endl;
    }

    return 0;
}

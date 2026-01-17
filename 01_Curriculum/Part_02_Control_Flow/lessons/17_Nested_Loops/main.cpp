/*************************************************
 * File Name : main.cpp
 * Lesson    : 17 - Nested Loops
 * Part      : Part 02 - Control Flow
 * Purpose   : Demonstrate the use of loops inside
 *             other loops to handle 2D data,
 *             patterns, and repetitive structures.
 *
 * Notes:
 * - Outer loop controls rows
 * - Inner loop controls columns
 * - Very common in matrices and patterns
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // BASIC NESTED FOR LOOP
    // =====================================================
    cout << "--- BASIC NESTED LOOP ---\n";

    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= 4; ++j)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    // =====================================================
    // MULTIPLICATION TABLE
    // =====================================================
    cout << "\n--- MULTIPLICATION TABLE ---\n";

    for (int row = 1; row <= 5; ++row)
    {
        for (int col = 1; col <= 5; ++col)
        {
            cout << row * col << "\t";
        }
        cout << endl;
    }

    // =====================================================
    // NESTED WHILE LOOP
    // =====================================================
    cout << "\n--- NESTED WHILE LOOP ---\n";

    int i = 1;
    while (i <= 3)
    {
        int j = 1;
        while (j <= 3)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    // =====================================================
    // BREAK IN NESTED LOOP
    // =====================================================
    cout << "\n--- BREAK IN NESTED LOOP ---\n";

    for (int x = 1; x <= 3; ++x)
    {
        for (int y = 1; y <= 3; ++y)
        {
            if (y == 2)
                break;

            cout << x << "," << y << " ";
        }
        cout << endl;
    }

    // =====================================================
    // CONTINUE IN NESTED LOOP
    // =====================================================
    cout << "\n--- CONTINUE IN NESTED LOOP ---\n";

    for (int a = 1; a <= 3; ++a)
    {
        for (int b = 1; b <= 3; ++b)
        {
            if (b == 2)
                continue;

            cout << a << "," << b << " ";
        }
        cout << endl;
    }

    // =====================================================
    // EMBEDDED SYSTEM STYLE (SCAN MATRIX)
    // =====================================================
    cout << "\n--- MATRIX SCAN ---\n";

    for (int row = 0; row < 2; ++row)
    {
        for (int col = 0; col < 3; ++col)
        {
            cout << "Cell[" << row << "][" << col << "] ";
        }
        cout << endl;
    }

    return 0;
}
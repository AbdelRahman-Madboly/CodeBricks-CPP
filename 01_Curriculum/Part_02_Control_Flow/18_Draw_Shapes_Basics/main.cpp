/*************************************************
 * File Name : main.cpp
 * Lesson    : 18 - Draw Shapes (Basics)
 * Part      : Part 02 - Control Flow
 * Purpose   : Draw basic shapes using nested
 *             loops to reinforce loop logic.
 *
 * Notes:
 * - Rows controlled by outer loop
 * - Columns controlled by inner loop
 * - Shapes are printed line by line
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // 1. DRAW A HORIZONTAL LINE
    // =====================================================
    cout << "--- HORIZONTAL LINE ---\n";

    for (int i = 0; i < 10; ++i)
    {
        cout << "*";
    }
    cout << endl;

    // =====================================================
    // 2. DRAW A VERTICAL LINE
    // =====================================================
    cout << "\n--- VERTICAL LINE ---\n";

    for (int i = 0; i < 5; ++i)
    {
        cout << "*\n";
    }

    // =====================================================
    // 3. DRAW A RECTANGLE (ROWS x COLUMNS)
    // =====================================================
    cout << "\n--- RECTANGLE ---\n";

    int rows = 4;
    int cols = 6;

    for (int r = 0; r < rows; ++r)
    {
        for (int c = 0; c < cols; ++c)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // =====================================================
    // 4. DRAW A SQUARE
    // =====================================================
    cout << "\n--- SQUARE ---\n";

    int size = 5;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << "# ";
        }
        cout << endl;
    }

    // =====================================================
    // 5. RIGHT-ANGLED TRIANGLE (LEFT)
    // =====================================================
    cout << "\n--- RIGHT TRIANGLE (LEFT) ---\n";

    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // =====================================================
    // 6. INVERTED RIGHT TRIANGLE
    // =====================================================
    cout << "\n--- INVERTED TRIANGLE ---\n";

    for (int i = 5; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
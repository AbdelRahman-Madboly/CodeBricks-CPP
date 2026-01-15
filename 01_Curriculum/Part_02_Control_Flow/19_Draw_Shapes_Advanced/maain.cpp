/*************************************************
 * File Name : main.cpp
 * Lesson    : 19 - Draw Shapes (Advanced)
 * Part      : Part 02 - Control Flow
 * Purpose   : Draw advanced patterns using nested
 *             loops and condition-based printing.
 *
 * Notes:
 * - Spaces are as important as stars
 * - Conditional logic inside loops
 * - Builds algorithmic thinking
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // 1. RIGHT-ALIGNED TRIANGLE
    // =====================================================
    cout << "--- RIGHT-ALIGNED TRIANGLE ---\n";

    int height = 5;

    for (int i = 1; i <= height; ++i)
    {
        for (int space = 1; space <= height - i; ++space)
            cout << "  ";

        for (int star = 1; star <= i; ++star)
            cout << "* ";

        cout << endl;
    }

    // =====================================================
    // 2. PYRAMID
    // =====================================================
    cout << "\n--- PYRAMID ---\n";

    for (int i = 1; i <= height; ++i)
    {
        for (int space = 1; space <= height - i; ++space)
            cout << " ";

        for (int star = 1; star <= (2 * i - 1); ++star)
            cout << "*";

        cout << endl;
    }

    // =====================================================
    // 3. INVERTED PYRAMID
    // =====================================================
    cout << "\n--- INVERTED PYRAMID ---\n";

    for (int i = height; i >= 1; --i)
    {
        for (int space = 1; space <= height - i; ++space)
            cout << " ";

        for (int star = 1; star <= (2 * i - 1); ++star)
            cout << "*";

        cout << endl;
    }

    // =====================================================
    // 4. HOLLOW SQUARE
    // =====================================================
    cout << "\n--- HOLLOW SQUARE ---\n";

    int size = 5;

    for (int i = 1; i <= size; ++i)
    {
        for (int j = 1; j <= size; ++j)
        {
            if (i == 1 || i == size || j == 1 || j == size)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // =====================================================
    // 5. DIAMOND SHAPE
    // =====================================================
    cout << "\n--- DIAMOND ---\n";

    // Upper half
    for (int i = 1; i <= height; ++i)
    {
        for (int space = 1; space <= height - i; ++space)
            cout << " ";

        for (int star = 1; star <= (2 * i - 1); ++star)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = height - 1; i >= 1; --i)
    {
        for (int space = 1; space <= height - i; ++space)
            cout << " ";

        for (int star = 1; star <= (2 * i - 1); ++star)
            cout << "*";

        cout << endl;
    }

    return 0;
}

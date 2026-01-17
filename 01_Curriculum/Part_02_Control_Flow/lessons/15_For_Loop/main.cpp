/*************************************************
 * File Name : main.cpp
 * Lesson    : 15 - For Loop
 * Part      : Part 02 - Control Flow
 * Purpose   : Demonstrate counter-controlled loops
 *             using the for loop.
 *
 * Notes:
 * - Initialization, condition, increment
 * - Preferred when iteration count is known
 * - Widely used in arrays, buffers, algorithms
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // BASIC FOR LOOP
    // =====================================================
    cout << "--- BASIC FOR LOOP ---\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << "i = " << i << endl;
    }

    // =====================================================
    // COUNTDOWN FOR LOOP
    // =====================================================
    cout << "\n--- COUNTDOWN ---\n";

    for (int i = 5; i > 0; i--)
    {
        cout << i << endl;
    }

    cout << "Done\n";

    // =====================================================
    // STEP SIZE EXAMPLE
    // =====================================================
    cout << "\n--- STEP SIZE (+= 2) ---\n";

    for (int i = 0; i <= 10; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    // =====================================================
    // MULTIPLE VARIABLES IN FOR LOOP
    // =====================================================
    cout << "\n--- MULTIPLE VARIABLES ---\n";

    for (int i = 0, j = 10; i <= j; i++, j--)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }

    // =====================================================
    // EMBEDDED SYSTEM STYLE (BUFFER PROCESSING)
    // =====================================================
    cout << "\n--- EMBEDDED BUFFER LOOP ---\n";

    const int SIZE = 5;
    int buffer[SIZE] = {10, 20, 30, 40, 50};

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Buffer[" << i << "] = " << buffer[i] << endl;
    }

    // =====================================================
    // EMPTY BODY FOR LOOP
    // =====================================================
    cout << "\n--- EMPTY BODY LOOP ---\n";

    int k;
    for (k = 0; k < 5; k++); // intentional semicolon

    cout << "k after loop = " << k << endl;

    return 0;
}
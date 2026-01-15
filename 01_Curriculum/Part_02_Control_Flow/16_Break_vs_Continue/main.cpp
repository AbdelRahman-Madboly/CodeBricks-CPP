/*************************************************
 * File Name : main.cpp
 * Lesson    : 16 - Break vs Continue
 * Part      : Part 02 - Control Flow
 * Purpose   : Demonstrate the difference between
 *             break and continue in loops.
 *
 * Notes:
 * - break exits the loop completely
 * - continue skips the current iteration
 * - Very common in filtering and control logic
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // BREAK EXAMPLE
    // =====================================================
    cout << "--- BREAK EXAMPLE ---\n";

    for (int i = 1; i <= 10; ++i)
    {
        if (i == 5)
        {
            cout << "Break at i = " << i << endl;
            break; // exit loop completely
        }

        cout << "i = " << i << endl;
    }
    // =====================================================
    // CONTINUE EXAMPLE
    // =====================================================
    cout << "\n--- CONTINUE EXAMPLE ---\n";

    for (int i = 1; i <= 10; ++i)
    {
        if (i == 5)
        {
            cout << "Skip i = " << i << endl;
            continue; // skip this iteration only
        }

        cout << "i = " << i << endl;
    }

    // =====================================================
    // BREAK IN WHILE LOOP
    // =====================================================
    cout << "\n--- BREAK IN WHILE LOOP ---\n";

    int count = 0;

    while (true)
    {
        count++;

        if (count == 3)
        {
            cout << "Breaking loop\n";
            break;
        }

        cout << "Count = " << count << endl;
    }
    // =====================================================
    // CONTINUE IN WHILE LOOP
    // =====================================================
    cout << "\n--- CONTINUE IN WHILE LOOP ---\n";

    int num = 0;

    while (num < 5)
    {
        num++;

        if (num == 3)
            continue;

        cout << "num = " << num << endl;
    }

    // =====================================================
    // EMBEDDED STYLE EXAMPLE
    // =====================================================
    cout << "\n--- EMBEDDED STYLE FILTER ---\n";

    for (int sensor = 0; sensor < 6; ++sensor)
    {
        if (sensor == 2)
            continue; // skip faulty sensor

        if (sensor == 5)
            break; // stop system

        cout << "Sensor " << sensor << " OK\n";
    }

    return 0;
}

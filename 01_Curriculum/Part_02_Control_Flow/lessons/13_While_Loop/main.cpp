/*************************************************
 * File Name : main.cpp
 * Lesson    : 13 - While Loop
 * Part      : Part 02 - Control Flow
 * Purpose   : Demonstrate pre-condition looping
 *             using the while loop.
 *
 * Notes:
 * - Condition checked BEFORE execution
 * - Loop may run zero times
 * - Common in embedded polling loops
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // BASIC WHILE LOOP
    // =====================================================
    int count = 1;

    cout << "--- BASIC WHILE LOOP ---\n";

    while (count <= 5)
    {
        cout << "Count: " << count << endl;
        count++;
    }

    // =====================================================
    // WHILE LOOP THAT MAY NEVER RUN
    // =====================================================
    int value = 10;

    cout << "\n--- CONDITION FALSE FROM START ---\n";

    while (value < 5)
    {
        cout << "This will not execute\n";
    }

    // =====================================================
    // EMBEDDED SYSTEM STYLE (POLLING)
    // =====================================================
    int sensorValue = 0;

    cout << "\n--- SENSOR POLLING ---\n";

    while (sensorValue < 3)
    {
        cout << "Reading sensor...\n";
        sensorValue++;
    }

    // =====================================================
    // COUNTDOWN EXAMPLE
    // =====================================================
    int timer = 5;

    cout << "\n--- COUNTDOWN ---\n";

    while (timer > 0)
    {
        cout << timer << endl;
        timer--;
    }

    cout << "Done\n";

    return 0;
}

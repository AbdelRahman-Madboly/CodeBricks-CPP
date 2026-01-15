/*************************************************
 * File Name : main.cpp
 * Lesson    : 14 - Do While Loop
 * Part      : Part 02 - Control Flow
 * Purpose   : Demonstrate post-condition looping
 *             using the do-while loop.
 *
 * Notes:
 * - Loop executes AT LEAST once
 * - Condition checked AFTER execution
 * - Useful for menus and user input
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // BASIC DO-WHILE LOOP
    // =====================================================
    int count = 1;

    cout << "--- BASIC DO-WHILE LOOP ---\n";

    do
    {
        cout << "Count: " << count << endl;
        count++;
    } while (count <= 5);

    // =====================================================
    // DO-WHILE ALWAYS RUNS ONCE
    // =====================================================
    int value = 10;

    cout << "\n--- ALWAYS RUNS ONCE ---\n";

    do
    {
        cout << "This runs even if condition is false\n";
    } while (value < 5);

    // =====================================================
    // MENU STYLE (COMMON USE CASE)
    // =====================================================
    char choice;

    cout << "\n--- MENU LOOP ---\n";

    do
    {
        cout << "\nMenu:\n";
        cout << "a - Action\n";
        cout << "q - Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 'a')
            cout << "Action executed\n";

    } while (choice != 'q');

    cout << "Exited menu\n";

    return 0;
}

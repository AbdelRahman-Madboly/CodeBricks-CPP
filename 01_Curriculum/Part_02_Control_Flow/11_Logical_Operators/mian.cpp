/*************************************************
 * File Name : main.cpp
 * Lesson    : 11 - Logical Operators
 * Part      : Part 02 - Control Flow
 * Purpose   : Demonstrate AND, OR, NOT behavior
 *             and shortest conditional forms.
 *
 * Notes:
 * - &&, ||, !
 * - Ternary operator
 *************************************************/


#include <iostream>
using namespace std;

int main()
{
    cout << boolalpha; // print true/false instead of 1/0

    // =====================================================
    // LOGICAL AND (&&)
    // =====================================================
    int age = 22;
    bool hasID = true;

    cout << "\n--- LOGICAL AND (&&) ---\n";
    cout << "Eligible to enter: "
         << (age >= 18 && hasID) << endl;

    // Shortest if (ternary)
    cout << ((age >= 18 && hasID) ? "ACCESS GRANTED\n" : "ACCESS DENIED\n");

    // =====================================================
    // LOGICAL OR (||)
    // =====================================================
    bool isAdmin = false;
    bool isModerator = true;

    cout << "\n--- LOGICAL OR (||) ---\n";
    cout << "Can manage system: "
         << (isAdmin || isModerator) << endl;

    // Shortest if
    cout << ((isAdmin || isModerator) ? "PERMISSION OK\n" : "NO PERMISSION\n");

    // =====================================================
    // LOGICAL NOT (!)
    // =====================================================
    bool error = false;

    cout << "\n--- LOGICAL NOT (!) ---\n";
    cout << "System healthy: "
         << (!error) << endl;

    // Shortest if
    cout << ((!error) ? "SYSTEM RUNNING\n" : "SYSTEM ERROR\n");

    // =====================================================
    // COMBINED LOGICAL OPERATORS
    // =====================================================
    int speed = 95;
    bool rain = false;

    cout << "\n--- COMBINED CONDITIONS ---\n";
    cout << ((speed > 80 && speed < 120 && !rain)
             ? "NORMAL DRIVING MODE\n"
             : "RESTRICTED MODE\n");

    // =====================================================
    // DIRECT BOOLEAN CHECK (SHORTEST IF EVER)
    // =====================================================
    bool connected = true;

    cout << "\n--- DIRECT BOOLEAN CHECK ---\n";
    if (connected)
        cout << "DEVICE CONNECTED\n";
    else
        cout << "DEVICE DISCONNECTED\n";

    // =====================================================
    // INTERVIEW-STYLE EXAMPLES
    // =====================================================
    cout << "\n--- INTERVIEW EXAMPLES ---\n";

    cout << "Example 1: " << ((5 < 10 && 3 > 1) ? true : false) << endl;
    cout << "Example 2: " << (!(10 == 20)) << endl;
    cout << "Example 3: " << ((false || true) && !false) << endl;

    return 0;
}

/*************************************************
 * File Name : main.cpp
 * Lesson    : 12 - Switch Statement
 * Part      : Part 02 - Control Flow
 * Purpose   : Demonstrate multi-branch selection
 *             using switch-case statements.
 *
 * Notes:
 * - switch works with integral types
 * - break prevents fall-through
 * - grouped cases are common in practice
 * - widely used in embedded systems
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // BASIC SWITCH STATEMENT
    // =====================================================
    int day = 3;

    cout << "--- BASIC SWITCH ---\n";

    switch (day)
    {
        case 1:
            cout << "Monday\n";
            break;

        case 2:
            cout << "Tuesday\n";
            break;

        case 3:
            cout << "Wednesday\n";
            break;

        case 4:
            cout << "Thursday\n";
            break;

        case 5:
            cout << "Friday\n";
            break;

        default:
            cout << "Invalid day\n";
    }

    // =====================================================
    // FALL-THROUGH BEHAVIOR (NO break)
    // =====================================================
    int level = 2;

    cout << "\n--- FALL THROUGH EXAMPLE ---\n";

    switch (level)
    {
        case 1:
            cout << "Low\n";
        case 2:
            cout << "Medium\n";
        case 3:
            cout << "High\n";
            break;

        default:
            cout << "Unknown level\n";
    }

    // Explanation:
    // level = 2 → "Medium" then "High"
    // Execution continues until a break is found

    // =====================================================
    // GROUPED CASES (BEST PRACTICE)
    // =====================================================
    char grade = 'B';

    cout << "\n--- GROUPED CASES ---\n";

    switch (grade)
    {
        case 'A':
        case 'B':
        case 'C':
            cout << "PASS\n";
            break;

        case 'D':
        case 'F':
            cout << "FAIL\n";
            break;

        default:
            cout << "Invalid grade\n";
    }

    // =====================================================
    // SWITCH WITH CHAR INPUT (MENU STYLE)
    // =====================================================
    char option = 's';

    cout << "\n--- MENU EXAMPLE ---\n";

    switch (option)
    {
        case 's':
            cout << "Start System\n";
            break;

        case 'p':
            cout << "Pause System\n";
            break;

        case 'r':
            cout << "Reset System\n";
            break;

        case 'q':
            cout << "Quit\n";
            break;

        default:
            cout << "Invalid Option\n";
    }

    // =====================================================
    // EMBEDDED SYSTEM STYLE EXAMPLE
    // =====================================================
    int errorCode = 404;

    cout << "\n--- EMBEDDED ERROR HANDLING ---\n";

    switch (errorCode)
    {
        case 200:
            cout << "OK\n";
            break;

        case 400:
            cout << "Bad Request\n";
            break;

        case 404:
            cout << "Not Found\n";
            break;

        case 500:
            cout << "Server Error\n";
            break;

        default:
            cout << "Unknown Error\n";
    }

    return 0;
}

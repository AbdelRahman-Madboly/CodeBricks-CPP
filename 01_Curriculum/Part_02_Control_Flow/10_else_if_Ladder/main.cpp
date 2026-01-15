/*************************************************
 * File Name : main.cpp
 * Lesson    : 10 - else if Ladder
 * Part      : Part 02 - Control Flow
 * Purpose   : Handle multiple conditional
 *             branches.
 *
 * Notes:
 * - Order matters
 * - First match executes
 *************************************************/


#include <iostream>

int main()
{
    // -------------------------------------------------
    // Example 1: Grading system
    // -------------------------------------------------
    int score = 82;

    if (score >= 90)
    {
        std::cout << "Grade: A\n";
    }
    else if (score >= 80)
    {
        std::cout << "Grade: B\n";
    }
    else if (score >= 70)
    {
        std::cout << "Grade: C\n";
    }
    else if (score >= 60)
    {
        std::cout << "Grade: D\n";
    }
    else
    {
        std::cout << "Grade: F\n";
    }

    // -------------------------------------------------
    // Example 2: Speed classification (embedded-style)
    // -------------------------------------------------
    int speed = 130;

    if (speed > 120)
    {
        std::cout << "Danger: Immediate action required\n";
    }
    else if (speed > 80)
    {
        std::cout << "Warning: Reduce speed\n";
    }
    else
    {
        std::cout << "Speed is safe\n";
    }

    // -------------------------------------------------
    // Example 3: Voltage level decision
    // -------------------------------------------------
    float voltage = 3.4f;

    if (voltage < 3.0f)
    {
        std::cout << "Low battery\n";
    }
    else if (voltage < 3.7f)
    {
        std::cout << "Normal battery\n";
    }
    else
    {
        std::cout << "Fully charged\n";
    }

    std::cout << "End of else-if ladder examples\n";

    return 0;
}

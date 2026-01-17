/*************************************************
 * File Name : main.cpp
 * Lesson    : 08 - if Statement
 * Part      : Part 02 - Control Flow
 * Purpose   : Demonstrate basic conditional
 *             execution using if.
 *
 * Notes:
 * - Condition evaluation
 * - Boolean expressions
 *************************************************/


#include <iostream>

int main()
{
    // -------------------------------------------------
    // Example 1: Simple if statement
    // -------------------------------------------------
    int speed = 80;

    if (speed > 60)
    {
        std::cout << "Example 1: Over speed detected\n";
    }

    // -------------------------------------------------
    // Example 2: if - else
    // -------------------------------------------------
    int temperature = 25;

    if (temperature > 30)
    {
        std::cout << "Example 2: High temperature\n";
    }
    else
    {
        std::cout << "Example 2: Normal temperature\n";
    }

    // -------------------------------------------------
    // Example 3: if - else if - else
    // -------------------------------------------------
    int score = 75;

    if (score >= 90)
    {
        std::cout << "Example 3: Grade A\n";
    }
    else if (score >= 75)
    {
        std::cout << "Example 3: Grade B\n";
    }
    else if (score >= 60)
    {
        std::cout << "Example 3: Grade C\n";
    }
    else
    {
        std::cout << "Example 3: Fail\n";
    }

    // -------------------------------------------------
    // Example 4: Embedded-style condition
    // -------------------------------------------------
    float voltage = 2.9f;

    if (voltage < 3.0f)
    {
        std::cout << "Example 4: Low battery - shutdown system\n";
    }
    else
    {
        std::cout << "Example 4: Battery OK\n";
    }

    // -------------------------------------------------
    // Example 5: Demonstrating non-zero = true
    // -------------------------------------------------
    int flag = 1;

    if (flag)
    {
        std::cout << "Example 5: Flag is TRUE\n";
    }

    // -------------------------------------------------
    // Example 6: Variable inside condition scope
    // -------------------------------------------------
    int x = 10;

    if (x > 5)
    {
        int y = 100;   // exists only inside this block
        std::cout << "Example 6: y = " << y << "\n";
    }

    // y is NOT accessible here

    std::cout << "End of Lesson 08 examples\n";

    return 0;
}

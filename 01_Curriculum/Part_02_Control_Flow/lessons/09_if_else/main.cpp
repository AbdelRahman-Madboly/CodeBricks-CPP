/*************************************************
 * File Name : main.cpp
 * Lesson    : 09 - if / else
 * Part      : Part 02 - Control Flow
 * Purpose   : Handle binary decision logic.
 *
 * Notes:
 * - True vs false paths
 *************************************************/


#include <iostream>

int main()
{
    // -------------------------------------------------
    // Example 1: Logical AND (&&)
    // -------------------------------------------------
    int speed = 90;
    int limit = 80;

    if (speed > limit && speed < 120)
    {
        std::cout << "Example 1: Warning - moderate overspeed\n";
    }
    else
    {
        std::cout << "Example 1: Speed OK or dangerous\n";
    }

    // -------------------------------------------------
    // Example 2: Logical OR (||)
    // -------------------------------------------------
    int temperature = 85;
    int pressure = 110;

    if (temperature > 80 || pressure > 100)
    {
        std::cout << "Example 2: Alert - sensor limit exceeded\n";
    }

    // -------------------------------------------------
    // Example 3: Logical NOT (!)
    // -------------------------------------------------
    bool systemReady = false;

    if (!systemReady)
    {
        std::cout << "Example 3: System not ready\n";
    }

    // -------------------------------------------------
    // Example 4: Combined logical operators
    // -------------------------------------------------
    float voltage = 3.1f;
    bool ignitionOn = true;

    if (voltage > 3.0f && ignitionOn)
    {
        std::cout << "Example 4: System running normally\n";
    }
    else
    {
        std::cout << "Example 4: System blocked\n";
    }

    // -------------------------------------------------
    // Example 5: Short-circuit behavior
    // -------------------------------------------------
    int x = 0;

    if (x != 0 && (10 / x) > 1)
    {
        std::cout << "Example 5: Will not execute\n";
    }
    else
    {
        std::cout << "Example 5: Safe due to short-circuit\n";
    }

    std::cout << "End of Lesson 09 examples\n";

    return 0;
}

/*************************************************
 * File Name : main.cpp
 * Lesson    : 07 - Variable Scope
 * Part      : Part 01 - Fundamentals
 * Purpose   : Explain local vs global variables
 *             and lifetime.
 *
 * Notes:
 * - Scope boundaries
 * - Shadowing
 *************************************************/

#include <iostream>

// Global variable
int systemState = 0;

void updateSystem()
{
    // Local variable
    int localCounter = 10;

    systemState += localCounter;
    std::cout << "Inside function, systemState = "
              << systemState << "\n";
}

int main()
{
    // Local variable (main scope)
    int systemState = 5;   // Shadows global variable

    std::cout << "Local systemState in main = "
              << systemState << "\n";

    updateSystem();

    std::cout << "Local systemState in main after function = "
              << systemState << "\n";

    return 0;
}

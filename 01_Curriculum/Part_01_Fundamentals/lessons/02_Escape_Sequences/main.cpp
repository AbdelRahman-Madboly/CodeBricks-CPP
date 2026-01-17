/*************************************************
 * File Name : main.cpp
 * Lesson    : 02 - Escape Sequences
 * Part      : Part 01 - Fundamentals
 * Purpose   : Demonstrate special character
 *             formatting in output.
 *
 * Notes:
 * - \n, \t, \\, \", \'
 * - \r carriage return behavior
 *************************************************/


#include<iostream>

int main()
{
    // New line
    std::cout << "Line 1\nLine 2\n";

    // Tab space
    std::cout << "Column1\tColumn2\tColumn3\n";

    // Backslash
    std::cout << "This is a backslash: \\\n";

    // Double quote
    std::cout << "She said: \"C++ is fun!\"\n";

    // Single quote
    std::cout << "Character: \'A\'\n";

    // Carriage return (overwrites line)
    std::cout << "Loading...\rDone\n";

    // Alert / Beep (may not work on all systems)
    std::cout << "\a";

    return 0;

}
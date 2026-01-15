/*************************************************
 * File Name : main.cpp
 * Lesson    : 03 - Variables & Data Types
 * Part      : Part 01 - Fundamentals
 * Purpose   : Learn how data is stored and
 *             represented in C++.
 *
 * Notes:
 * - int, float, double, char, bool
 * - Declaration vs initialization
 *************************************************/


#include<iostream>

int main()
{
    // Integer types
    int age = 25;
    unsigned int speed = 120;

    // Floating-point types
    float temperature = 36.5f;
    double voltage = 3.300;

    // Character type
    char grade = 'A';

    // Boolean type
    bool isSystemReady = true;

    // Output values
    std::cout << "Age: " << age << "\n";
    std::cout << "Speed: " << speed << "\n";
    std::cout << "Temperature: " << temperature << "\n";
    std::cout << "Voltage: " << voltage << "\n";
    std::cout << "Grade: " << grade << "\n";
    std::cout << "System Ready: " << isSystemReady << "\n";
    
    return 0;
}
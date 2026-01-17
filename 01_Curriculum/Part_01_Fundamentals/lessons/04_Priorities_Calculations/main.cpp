/*************************************************
 * File Name : main.cpp
 * Lesson    : 04 - Operator Priority
 * Part      : Part 01 - Fundamentals
 * Purpose   : Understand operator precedence
 *             and evaluation order.
 *
 * Notes:
 * - Arithmetic precedence
 * - Parentheses importance
 *************************************************/


#include <iostream>

int main()
{
    int a = 10;
    int b = 5;
    int c = 2;

    // Arithmetic precedence
    int result1 = a + b * c;        // 10 + (5 * 2) = 20
    int result2 = (a + b) * c;      // (10 + 5) * 2 = 30

    // Division and multiplication
    int result3 = a / b * c;        // (10 / 5) * 2 = 4
    int result4 = a / (b * c);      // 10 / (5 * 2) = 1

    // Modulus operator
    int result5 = a % b + c;        // (10 % 5) + 2 = 2

    // Mixed operators
    int result6 = a + b - c * b;    // 10 + 5 - (2 * 5) = 5

    // Output results
    std::cout << "result1 = " << result1 << "\n";
    std::cout << "result2 = " << result2 << "\n";
    std::cout << "result3 = " << result3 << "\n";
    std::cout << "result4 = " << result4 << "\n";
    std::cout << "result5 = " << result5 << "\n";
    std::cout << "result6 = " << result6 << "\n";

    return 0;
}

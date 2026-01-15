/*************************************************
 * File Name : main.cpp
 * Lesson    : 06 - Prefix, Postfix & Compound Ops
 * Part      : Part 01 - Fundamentals
 * Purpose   : Understand increment behavior
 *             and compound assignments.
 *
 * Notes:
 * - ++i vs i++
 * - +=, -=, *=, /=
 *************************************************/


#include <iostream>

int main()
{
    int x = 5;
    int y;

    // Postfix increment
    y = x++;
    std::cout << "Postfix x++\n";
    std::cout << "y = " << y << ", x = " << x << "\n\n";

    // Reset
    x = 5;

    // Prefix increment
    y = ++x;
    std::cout << "Prefix ++x\n";
    std::cout << "y = " << y << ", x = " << x << "\n\n";

    // Compound assignment operators
    int a = 10;

    a += 5;   // a = a + 5
    std::cout << "a += 5 -> " << a << "\n";

    a -= 3;   // a = a - 3
    std::cout << "a -= 3 -> " << a << "\n";

    a *= 2;   // a = a * 2
    std::cout << "a *= 2 -> " << a << "\n";

    a /= 4;   // a = a / 4
    std::cout << "a /= 4 -> " << a << "\n";

    return 0;
}

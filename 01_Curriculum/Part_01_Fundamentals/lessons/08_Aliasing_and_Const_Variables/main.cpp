/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 08 - Aliasing and Const Variables
 * Part      : Part 01 - Fundamentals
 * Purpose   : Understand variable aliasing using
 *             references and how const variables
 *             enforce immutability.
 *
 * Notes:
 * - Aliasing means multiple names refer to same memory
 * - References are aliases, not copies
 * - const prevents modification after initialization
 *
 * Interview Hints:
 * - References must be initialized
 * - const is enforced at compile time
 *************************************************/

#include <iostream>

using namespace std;

int main()
{
    int value = 10;

    // Aliasing: reference to the same variable
    int& alias = value;

    cout << "Value: " << value << endl;
    cout << "Alias: " << alias << endl;

    alias = 20; // modifies the same memory

    cout << "After modifying alias:" << endl;
    cout << "Value: " << value << endl;
    cout << "Alias: " << alias << endl;

    cout << "----------------------" << endl;

    // Const variable
    const int MAX_LIMIT = 100;
    cout << "MAX_LIMIT: " << MAX_LIMIT << endl;

    // Const reference (read-only alias)
    const int& readOnlyRef = value;
    cout << "Read-only reference: " << readOnlyRef << endl;

    return 0;
}

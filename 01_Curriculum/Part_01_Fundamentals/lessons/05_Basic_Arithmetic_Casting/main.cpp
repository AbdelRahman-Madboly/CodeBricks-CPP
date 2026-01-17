/*************************************************
 * File Name : main.cpp
 * Lesson    : 05 - Arithmetic & Casting
 * Part      : Part 01 - Fundamentals
 * Purpose   : Demonstrate integer vs floating-
 *             point math and type casting.
 *
 * Notes:
 * - Integer division pitfalls
 * - Explicit casting
 *************************************************/


#include <iostream>

int main()
{
    int a = 10;
    int b = 3;

    // Basic arithmetic operations
    int sum        = a + b;
    int difference = a - b;
    int product    = a * b;
    int quotient   = a / b;    // Integer division
    int remainder  = a % b;

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << difference << "\n";
    std::cout << "Product: " << product << "\n";
    std::cout << "Quotient (int): " << quotient << "\n";
    std::cout << "Remainder: " << remainder << "\n";

    // Implicit casting
    float result1 = a / b;     // WRONG expectation
    std::cout << "Implicit cast result: " << result1 << "\n";

    // Explicit casting (C-style)
    float result2 = (float)a / b;
    std::cout << "Explicit cast result (C-style): " << result2 << "\n";

    // Explicit casting (C++ style - recommended)
    float result3 = static_cast<float>(a) / b;
    std::cout << "Explicit cast result (C++ style): " << result3 << "\n";

    int adc = 512;

    float voltage = adc * 3.3 / 1023;   // WRONG
    // It compiles and works, but it silently promotes the expression to double,
    // which is inefficient and unsafe for embedded systems.

    std::cout << "voltage: " << voltage << "\n";

    // float voltage1 = adc * (3 / 1023);   // ALWAYS ZERO
    
    // Both are int Integer division: 3 / 1023 = 0, adc * 0 = 0, float voltage = 0, voltage = 0.0.

    // std::cout << "voltage: " << voltage1 << "\n";


    float voltage2 = adc * (3.3 / 1023);   // CORRECT
    std::cout << "voltage: " << voltage2 << "\n";


    return 0;
}

/*************************************************
 * File Name : problem_1.cpp
 * Part      : Sheet_1
 * Purpose   : Write a program to take 2 numbers from user and
 *             calculate sum of all numbers between them.
 *
 * Notes:
 * -
 *************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum = 0;

    cout << "-- Sum of Numbers Between Two Inputs --\n";

    for (;;)
    {
        cout << "Enter First number: \n";
        cin >> num1;
        cout << "Enter Second number: \n";
        cin >> num2;

        if (num1 > num2)
        {
            for (int i = num2; i <= num1; i++)
            {
                sum += i;
            }
        }
        else
        {
            for (int i = num1; i <= num2; i++)
            {
                sum += i;
            }
        }

        cout << "Current Sum: " << sum << endl;
        sum = 0; // Reset sum for next iteration
    }

    return 0;
}

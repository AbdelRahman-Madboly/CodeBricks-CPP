/*************************************************
 * File Name : main.cpp
 * Lesson    : Lesson 06 - Random Functions (Comprehensive)
 * Part      : Part 03 - Functions
 * Purpose   : Demonstrate practical, real-world,
 *             and interview-level use cases of
 *             random functions in C++.
 *
 * Notes:
 * - rand() generates pseudo-random numbers
 * - srand() seeds the random generator
 * - Same seed → same sequence
 * - Random logic is widely used in:
 *   simulations, testing, games, and AI
 *
 * Interview Hints:
 * - rand() is deterministic
 * - Do NOT seed inside loops
 * - rand() is NOT secure
 *************************************************/

#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()

using namespace std;

/*------------------------------------------------
  Utility Function: Generate random number in range
------------------------------------------------*/
int randomInRange(int min, int max)
{
    return min + (rand() % (max - min + 1));
}

/*------------------------------------------------
  Case 1: Dice Simulation
------------------------------------------------*/
void diceSimulation()
{
    int dice = randomInRange(1, 6);
    cout << "[Dice] Rolled: " << dice << endl;
}

/*------------------------------------------------
  Case 2: Coin Toss
------------------------------------------------*/
void coinToss()
{
    int toss = rand() % 2;
    cout << "[Coin Toss] Result: "
         << (toss == 0 ? "Heads" : "Tails") << endl;
}

/*------------------------------------------------
  Case 3: Guess-the-Number (Simulation)
------------------------------------------------*/
void guessNumberSimulation()
{
    int secret = randomInRange(1, 10);
    int guess = randomInRange(1, 10);

    cout << "[Guess Game] Secret: " << secret
         << ", Guess: " << guess << endl;

    if (guess == secret)
        cout << "Result: Correct Guess!" << endl;
    else
        cout << "Result: Wrong Guess" << endl;
}

/*------------------------------------------------
  Case 4: Sensor Noise Simulation (Embedded-style)
------------------------------------------------*/
void sensorNoiseSimulation()
{
    int baseValue = 100;
    int noise = randomInRange(-5, 5);

    cout << "[Sensor] Base: " << baseValue
         << ", Noise: " << noise
         << ", Final: " << baseValue + noise << endl;
}

/*------------------------------------------------
  Case 5: Random Speed & Overspeed Check
------------------------------------------------*/
void speedSimulation()
{
    int speed = randomInRange(40, 140);

    cout << "[Speed] Vehicle speed: " << speed << " km/h -> ";

    if (speed > 100)
        cout << "OVERSPEED!" << endl;
    else
        cout << "Normal" << endl;
}

/*------------------------------------------------
  Case 6: Random Array Generation
------------------------------------------------*/
void randomArray()
{
    const int SIZE = 5;
    int arr[SIZE];

    cout << "[Array] Values: ";
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = randomInRange(1, 50);
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*------------------------------------------------
  Case 7: Random Task Selector
------------------------------------------------*/
void taskSelector()
{
    int task = randomInRange(1, 3);

    cout << "[Task Selector] ";
    switch (task)
    {
        case 1: cout << "Read documentation" << endl; break;
        case 2: cout << "Write code" << endl; break;
        case 3: cout << "Fix bugs" << endl; break;
    }
}

/*------------------------------------------------
  Case 8: Random Failure Injection
------------------------------------------------*/
void failureInjection()
{
    bool failure = rand() % 5 == 0; // 20% chance

    cout << "[System] ";
    if (failure)
        cout << "FAILURE detected!" << endl;
    else
        cout << "System OK" << endl;
}

/*------------------------------------------------
  MAIN FUNCTION
------------------------------------------------*/
int main()
{
    // Seed random generator ONCE
    srand(static_cast<unsigned int>(time(0)));

    cout << "===== RANDOM FUNCTION DEMONSTRATION =====\n";

    diceSimulation();
    coinToss();
    guessNumberSimulation();
    sensorNoiseSimulation();
    speedSimulation();
    randomArray();
    taskSelector();
    failureInjection();

    cout << "===== END OF DEMO =====\n";

    return 0;
}

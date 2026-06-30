#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "----- QUIZ APPLICATION -----\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter answer: ";
    cin >> ans;

    if (ans == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++?\n";
    cout << "1. Programming\n2. Markup\n3. Database\n4. Query\n";
    cout << "Enter answer: ";
    cin >> ans;

    if (ans == 1)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 364\n3. 366\n4. 367\n";
    cout << "Enter answer: ";
    cin >> ans;

    if (ans == 3)
        score++;

    // Question 4
    cout << "\n4. Which operator is used for multiplication in C++?\n";
    cout << "1. +\n2. *\n3. /\n4. %\n";
    cout << "Enter answer: ";
    cin >> ans;

    if (ans == 2)
        score++;

    // Question 5
    cout << "\n5. Which keyword is used to declare a constant?\n";
    cout << "1. const\n2. static\n3. final\n4. fixed\n";
    cout << "Enter answer: ";
    cin >> ans;

    if (ans == 1)
        score++;

    cout << "\n-----------------------\n";
    cout << "Your Score: " << score << "/5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}
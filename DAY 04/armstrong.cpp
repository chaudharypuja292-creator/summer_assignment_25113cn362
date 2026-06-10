#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, count = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Count digits
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to power count
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp /= 10;
    }

    if (sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
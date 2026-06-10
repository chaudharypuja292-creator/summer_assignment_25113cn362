#include <iostream>
using namespace std;

int main() {
    int binary, rem;
    int decimal = 0, power = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * power;
        power = power * 2;
        binary = binary / 10;
    }

    cout << "Decimal Number = " << decimal;

    return 0;
}
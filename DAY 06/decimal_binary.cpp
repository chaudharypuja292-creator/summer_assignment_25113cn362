#include <iostream>
using namespace std;

int main() {
    int num;
    long long binary = 0;
    int rem, place = 1;

    cout << "Enter a decimal number: ";
    cin >> num;

    while (num > 0) {
        rem = num % 2;
        binary = binary + rem * place;
        place *= 10;
        num /= 2;
    }

    cout << "Binary Number = " << binary;

    return 0;
}
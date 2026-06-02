#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int largestPrimeFactor = -1;

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}
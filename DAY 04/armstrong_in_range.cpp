#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (int num = start; num <= end; num++) {
        int temp = num;
        int count = 0;
        int sum = 0;

        // Count digits
        while (temp > 0) {
            count++;
            temp /= 10;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}
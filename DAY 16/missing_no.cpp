#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 4; // size of array

    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Missing Number = " << total - sum;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2};
    int n = 6;

    int maxCount = 0, element;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    cout << "Element with maximum frequency = " << element;
    cout << "\nFrequency = " << maxCount;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4};
    int n = 7;

    int j = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    while(j < n) {
        arr[j++] = 0;
    }

    cout << "Array after moving zeros to end: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
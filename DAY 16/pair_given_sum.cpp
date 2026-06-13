#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair: " << arr[i] << " " << arr[j];
                found = true;
            }
        }
    }

    if(!found)
        cout << "No Pair Found";

    return 0;
}
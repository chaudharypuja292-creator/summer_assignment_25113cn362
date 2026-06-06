#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {

        // Increasing characters
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }

        // Decreasing characters
        for(char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}
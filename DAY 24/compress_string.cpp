#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        int count = 1;

        while (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        cout << str[i] << count;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    cout << "Common Characters: ";

    for(int i = 0; i < s1.length(); i++) {
        bool found = false;

        for(int j = 0; j < s2.length(); j++) {
            if(s1[i] == s2[j]) {
                found = true;
                break;
            }
        }

        bool duplicate = false;
        for(int k = 0; k < i; k++) {
            if(s1[k] == s1[i]) {
                duplicate = true;
                break;
            }
        }

        if(found && !duplicate)
            cout << s1[i] << " ";
    }

    return 0;
}
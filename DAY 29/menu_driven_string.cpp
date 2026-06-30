#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a String: ";
    getline(cin, str);

    do {
        cout << "\n===== STRING OPERATIONS =====\n";
        cout << "1. Display Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Length = " << str.length() << endl;
            break;

        case 2: {
            string rev = str;
            reverse(rev.begin(), rev.end());
            cout << "Reversed String: " << rev << endl;
            break;
        }

        case 3:
            for (char &c : str)
                c = toupper(c);
            cout << "Uppercase: " << str << endl;
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}
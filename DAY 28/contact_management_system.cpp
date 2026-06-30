#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact c[100];
    int n = 0, choice;
    string searchName;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter Name: ";
            getline(cin, c[n].name);

            cout << "Enter Phone Number: ";
            getline(cin, c[n].phone);

            n++;
            cout << "Contact Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
                cout << "No Contacts Found.\n";
            else {
                for (int i = 0; i < n; i++) {
                    cout << "\nName : " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;
                }
            }
            break;

        case 3: {
            bool found = false;
            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            for (int i = 0; i < n; i++) {
                if (c[i].name == searchName) {
                    cout << "\nContact Found\n";
                    cout << "Name : " << c[i].name << endl;
                    cout << "Phone: " << c[i].phone << endl;
                    found = true;
                }
            }

            if (!found)
                cout << "Contact Not Found.\n";

            break;
        }

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}
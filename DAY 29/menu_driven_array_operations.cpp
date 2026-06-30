#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n===== ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Search Element\n";
        cout << "3. Update Element\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 2:
            cout << "Enter element to search: ";
            cin >> value;
            bool found;
            found = false;

            for (int i = 0; i < n; i++) {
                if (arr[i] == value) {
                    cout << "Element Found at Position " << i + 1 << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Element Not Found.\n";
            break;

        case 3:
            cout << "Enter position (1-" << n << "): ";
            cin >> pos;

            if (pos >= 1 && pos <= n) {
                cout << "Enter new value: ";
                cin >> arr[pos - 1];
                cout << "Updated Successfully.\n";
            } else
                cout << "Invalid Position.\n";
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
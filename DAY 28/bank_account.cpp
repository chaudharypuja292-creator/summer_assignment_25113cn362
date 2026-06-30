#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int accNo;
    double balance = 0, amount;
    int choice;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accNo;

    do {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Amount: ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited Successfully.\n";
            break;

        case 2:
            cout << "Enter Amount: ";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal Successful.\n";
            } else
                cout << "Insufficient Balance.\n";
            break;

        case 3:
            cout << "Current Balance: Rs. " << balance << endl;
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}
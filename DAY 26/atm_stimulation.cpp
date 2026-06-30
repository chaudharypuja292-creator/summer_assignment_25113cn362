#include <iostream>
using namespace std;

int main() {
    int pin = 1234, enteredPin;
    double balance = 10000;
    int choice;
    double amount;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN!";
        return 0;
    }

    do {
        cout << "\n----- ATM MENU -----\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Current Balance: Rs. " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit Successful!\n";
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal Successful!\n";
            } else {
                cout << "Insufficient Balance!\n";
            }
            break;

        case 4:
            cout << "Thank you for using ATM.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
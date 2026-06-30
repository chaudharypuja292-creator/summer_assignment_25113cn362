#include <iostream>
using namespace std;

int main() {
    int seats = 50;
    int choice, tickets;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "Available Seats: " << seats << endl;
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Number of Tickets: ";
            cin >> tickets;

            if (tickets <= seats) {
                seats -= tickets;
                cout << "Booking Successful.\n";
            } else
                cout << "Not Enough Seats Available.\n";
            break;

        case 2:
            cout << "Enter Number of Tickets to Cancel: ";
            cin >> tickets;

            seats += tickets;
            cout << "Cancellation Successful.\n";
            break;

        case 3:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 3);

    return 0;
}
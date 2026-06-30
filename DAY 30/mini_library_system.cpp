#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
};

void addBook(Book b[], int &n) {
    cout << "Enter Book ID: ";
    cin >> b[n].id;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b[n].title);

    n++;
    cout << "Book Added Successfully!\n";
}

void displayBooks(Book b[], int n) {
    if (n == 0) {
        cout << "No Books Available!\n";
        return;
    }

    cout << "\nLibrary Books\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << b[i].id
             << "  Title: " << b[i].title << endl;
    }
}

int main() {
    Book b[100];
    int n = 0, choice;

    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addBook(b, n);
            break;

        case 2:
            displayBooks(b, n);
            break;

        case 3:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}
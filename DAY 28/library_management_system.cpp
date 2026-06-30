#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

int main() {
    Book books[100];
    int n = 0, choice, id;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter Book ID: ";
            cin >> books[n].id;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, books[n].title);

            cout << "Enter Author Name: ";
            getline(cin, books[n].author);

            books[n].issued = false;
            n++;
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (n == 0)
                cout << "No Books Available!\n";
            else {
                for (int i = 0; i < n; i++) {
                    cout << "\nBook ID : " << books[i].id;
                    cout << "\nTitle   : " << books[i].title;
                    cout << "\nAuthor  : " << books[i].author;
                    cout << "\nStatus  : "
                         << (books[i].issued ? "Issued" : "Available")
                         << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (books[i].id == id) {
                    if (!books[i].issued) {
                        books[i].issued = true;
                        cout << "Book Issued Successfully.\n";
                    } else
                        cout << "Book Already Issued.\n";
                }
            }
            break;

        case 4:
            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (books[i].id == id) {
                    books[i].issued = false;
                    cout << "Book Returned Successfully.\n";
                }
            }
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
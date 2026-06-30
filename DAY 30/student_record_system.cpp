#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

void addStudent(Student s[], int &n) {
    cout << "\nEnter Roll Number: ";
    cin >> s[n].rollNo;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s[n].name);

    cout << "Enter Marks: ";
    cin >> s[n].marks;

    n++;
    cout << "Student Added Successfully!\n";
}

void displayStudents(Student s[], int n) {
    if (n == 0) {
        cout << "No Records Found!\n";
        return;
    }

    cout << "\n----- STUDENT RECORDS -----\n";
    for (int i = 0; i < n; i++) {
        cout << "\nRoll No : " << s[i].rollNo;
        cout << "\nName    : " << s[i].name;
        cout << "\nMarks   : " << s[i].marks << endl;
    }
}

int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent(s, n);
            break;

        case 2:
            displayStudents(s, n);
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
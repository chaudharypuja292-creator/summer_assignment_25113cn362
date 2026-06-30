#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

void addStudent(Student s[], int &n) {
    cout << "\nEnter Roll Number: ";
    cin >> s[n].roll;
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

    cout << "\n------ STUDENT DETAILS ------\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No : " << s[i].roll;
        cout << "\nName    : " << s[i].name;
        cout << "\nMarks   : " << s[i].marks << endl;
    }
}

void searchStudent(Student s[], int n) {
    int roll;
    bool found = false;

    cout << "Enter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << s[i].roll << endl;
            cout << "Name    : " << s[i].name << endl;
            cout << "Marks   : " << s[i].marks << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student Not Found!\n";
}

int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
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
            searchStudent(s, n);
            break;

        case 4:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
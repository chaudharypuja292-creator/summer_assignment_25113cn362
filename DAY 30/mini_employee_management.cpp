#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void addEmployee(Employee e[], int &n) {
    cout << "Enter Employee ID: ";
    cin >> e[n].id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, e[n].name);

    cout << "Enter Salary: ";
    cin >> e[n].salary;

    n++;
    cout << "Employee Added Successfully!\n";
}

void displayEmployees(Employee e[], int n) {
    if (n == 0) {
        cout << "No Employees Found!\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID     : " << e[i].id << endl;
        cout << "Name   : " << e[i].name << endl;
        cout << "Salary : " << e[i].salary << endl;
    }
}

int main() {
    Employee e[100];
    int n = 0, choice;

    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addEmployee(e, n);
            break;

        case 2:
            displayEmployees(e, n);
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
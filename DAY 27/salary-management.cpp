#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double basic, hra, da, pf, gross, net;

    cout << "----- SALARY MANAGEMENT SYSTEM -----\n";

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;   // 20% HRA
    da = basic * 0.10;    // 10% DA
    pf = basic * 0.12;    // 12% PF deduction

    gross = basic + hra + da;
    net = gross - pf;

    cout << "\n----- SALARY SLIP -----\n";
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basic << endl;
    cout << "HRA           : " << hra << endl;
    cout << "DA            : " << da << endl;
    cout << "PF Deduction  : " << pf << endl;
    cout << "Gross Salary  : " << gross << endl;
    cout << "Net Salary    : " << net << endl;

    return 0;
}
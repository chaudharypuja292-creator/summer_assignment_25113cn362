#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    Product p[100];
    int n = 0, choice;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter Product ID: ";
            cin >> p[n].id;
            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, p[n].name);

            cout << "Enter Quantity: ";
            cin >> p[n].quantity;

            cout << "Enter Price: ";
            cin >> p[n].price;

            n++;
            cout << "Product Added Successfully.\n";
            break;

        case 2:
            for (int i = 0; i < n; i++) {
                cout << "\nID: " << p[i].id;
                cout << "\nName: " << p[i].name;
                cout << "\nQuantity: " << p[i].quantity;
                cout << "\nPrice: Rs." << p[i].price << endl;
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Product ID: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (p[i].id == id) {
                    cout << "\nProduct Found\n";
                    cout << "Name: " << p[i].name << endl;
                    cout << "Quantity: " << p[i].quantity << endl;
                    cout << "Price: Rs." << p[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found.\n";

            break;
        }

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}
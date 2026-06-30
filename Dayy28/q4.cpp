#include <iostream>
#include <string>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
};

int main() {
    Contact c[100];
    int n = 0, choice, searchId;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Contact ID: ";
            cin >> c[n].id;

            cout << "Enter Contact Name: ";
            cin >> c[n].name;

            cout << "Enter Phone Number: ";
            cin >> c[n].phone;

            n++;
            cout << "Contact added successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No contacts available.\n";
            } else {
                cout << "\n===== Contact List =====\n";
                cout << "-----------------------------------------\n";
                cout << "ID\tName\tPhone Number\n";
                cout << "-----------------------------------------\n";

                for (int i = 0; i < n; i++) {
                    cout << c[i].id << "\t"
                         << c[i].name << "\t"
                         << c[i].phone << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Contact ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++) {
                if (c[i].id == searchId) {
                    cout << "\nContact Found!\n";
                    cout << "ID           : " << c[i].id << endl;
                    cout << "Name         : " << c[i].name << endl;
                    cout << "Phone Number : " << c[i].phone << endl;
                    break;
                }

                if (i == n - 1)
                    cout << "Contact not found!\n";
            }
            break;

        case 4:
            cout << "Thank you for using the Contact Management System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
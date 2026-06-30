#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary, hra, da, grossSalary;
};

int main() {
    Employee emp[100];
    int n = 0, choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary Details\n";
        cout << "2. Display Salary Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].id;

            cout << "Enter Employee Name: ";
            cin >> emp[n].name;

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basicSalary;

            emp[n].hra = 0.20 * emp[n].basicSalary;   // 20% HRA
            emp[n].da = 0.10 * emp[n].basicSalary;    // 10% DA
            emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

            cout << "Salary details added successfully!\n";
            n++;
            break;

        case 2:
            if (n == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\nEmployee Salary Details\n";
                cout << "-------------------------------------------------------------\n";
                cout << "ID\tName\tBasic\tHRA\tDA\tGross Salary\n";
                cout << "-------------------------------------------------------------\n";

                for (int i = 0; i < n; i++) {
                    cout << emp[i].id << "\t"
                         << emp[i].name << "\t"
                         << emp[i].basicSalary << "\t"
                         << emp[i].hra << "\t"
                         << emp[i].da << "\t"
                         << emp[i].grossSalary << endl;
                }
            }
            break;

        case 3:
            cout << "Thank you for using Salary Management System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}
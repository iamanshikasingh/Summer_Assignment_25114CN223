#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, choice, searchId;
    int empId[100];
    string empName[100];
    float salary[100];

    cout << "Enter Number of Employees: ";
    cin >> n;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee Records\n";
        cout << "2. Display Employee Records\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            for (int i = 0; i < n; i++) {
                cout << "\nEnter Details of Employee " << i + 1 << endl;

                cout << "Employee ID: ";
                cin >> empId[i];

                cout << "Employee Name: ";
                cin >> empName[i];

                cout << "Salary: ";
                cin >> salary[i];
            }
            break;

        case 2:
            cout << "\n===== Employee Records =====\n";
            cout << "ID\tName\tSalary\n";

            for (int i = 0; i < n; i++) {
                cout << empId[i] << "\t"
                     << empName[i] << "\t"
                     << salary[i] << endl;
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++) {
                if (empId[i] == searchId) {
                    cout << "\nEmployee Found!\n";
                    cout << "Employee ID: " << empId[i] << endl;
                    cout << "Name       : " << empName[i] << endl;
                    cout << "Salary     : " << salary[i] << endl;
                    break;
                }

                if (i == n - 1)
                    cout << "Employee not found!\n";
            }
            break;

        case 4:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
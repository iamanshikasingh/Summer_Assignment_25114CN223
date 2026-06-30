#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, choice, rollSearch;
    int rollNo[100];
    string name[100];
    float marks[100];

    cout << "Enter Number of Students: ";
    cin >> n;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student Records\n";
        cout << "2. Display Student Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            for (int i = 0; i < n; i++) {
                cout << "\nEnter Details of Student " << i + 1 << endl;

                cout << "Roll Number: ";
                cin >> rollNo[i];

                cout << "Name: ";
                cin >> name[i];

                cout << "Marks: ";
                cin >> marks[i];
            }
            break;

        case 2:
            cout << "\n===== Student Records =====\n";
            cout << "Roll No\tName\tMarks\n";

            for (int i = 0; i < n; i++) {
                cout << rollNo[i] << "\t"
                     << name[i] << "\t"
                     << marks[i] << endl;
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> rollSearch;

            for (int i = 0; i < n; i++) {
                if (rollNo[i] == rollSearch) {
                    cout << "\nStudent Found!\n";
                    cout << "Roll Number: " << rollNo[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Marks: " << marks[i] << endl;
                    break;
                }

                if (i == n - 1)
                    cout << "Student not found!\n";
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

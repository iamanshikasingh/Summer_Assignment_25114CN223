#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int rollNo[MAX];
string name[MAX];
float marks[MAX];
int n = 0;

// Function to Add Student
void addStudent() {
    cout << "\nEnter Roll Number: ";
    cin >> rollNo[n];

    cout << "Enter Name: ";
    cin >> name[n];

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student Added Successfully!\n";
}

// Function to Display Students
void displayStudents() {
    if (n == 0) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";
    cout << "Roll No\tName\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << rollNo[i] << "\t"
             << name[i] << "\t"
             << marks[i] << endl;
    }
}

// Function to Search Student
void searchStudent() {
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == roll) {
            cout << "\nStudent Found!\n";
            cout << "Roll Number : " << rollNo[i] << endl;
            cout << "Name        : " << name[i] << endl;
            cout << "Marks       : " << marks[i] << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Function to Update Marks
void updateMarks() {
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == roll) {
            cout << "Enter New Marks: ";
            cin >> marks[i];
            cout << "Marks Updated Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Function to Delete Student
void deleteStudent() {
    int roll;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == roll) {
            for (int j = i; j < n - 1; j++) {
                rollNo[j] = rollNo[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            n--;
            cout << "Record Deleted Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
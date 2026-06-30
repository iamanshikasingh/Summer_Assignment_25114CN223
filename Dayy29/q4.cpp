#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int choice;

    cout << "Enter First String: ";
    cin >> str1;

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Find Length\n";
        cout << "2. Concatenate Strings\n";
        cout << "3. Compare Strings\n";
        cout << "4. Reverse String\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Length of String = " << str1.length() << endl;
            break;

        case 2:
            cout << "Enter Second String: ";
            cin >> str2;
            cout << "Concatenated String: " << str1 + str2 << endl;
            break;

        case 3:
            cout << "Enter Second String: ";
            cin >> str2;

            if (str1 == str2)
                cout << "Both strings are equal." << endl;
            else
                cout << "Strings are not equal." << endl;
            break;

        case 4:
            cout << "Reversed String: ";
            for (int i = str1.length() - 1; i >= 0; i--) {
                cout << str1[i];
            }
            cout << endl;
            break;

        case 5:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
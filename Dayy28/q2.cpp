#include <iostream>
#include <string>
using namespace std;

struct Account {
    int accountNo;
    string name;
    float balance;
};

int main() {
    Account acc[100];
    int n = 0, choice, accNo;
    float amount;

    do {
        cout << "\n===== Bank Account Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Account Number: ";
            cin >> acc[n].accountNo;

            cout << "Enter Account Holder Name: ";
            cin >> acc[n].name;

            cout << "Enter Initial Balance: ";
            cin >> acc[n].balance;

            n++;
            cout << "Account created successfully!\n";
            break;

        case 2:
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < n; i++) {
                if (acc[i].accountNo == accNo) {
                    cout << "Enter Deposit Amount: ";
                    cin >> amount;

                    acc[i].balance += amount;

                    cout << "Amount deposited successfully.\n";
                    cout << "Current Balance: " << acc[i].balance << endl;
                    break;
                }

                if (i == n - 1)
                    cout << "Account not found!\n";
            }
            break;

        case 3:
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < n; i++) {
                if (acc[i].accountNo == accNo) {
                    cout << "Enter Withdrawal Amount: ";
                    cin >> amount;

                    if (amount <= acc[i].balance) {
                        acc[i].balance -= amount;
                        cout << "Withdrawal successful.\n";
                        cout << "Remaining Balance: " << acc[i].balance << endl;
                    } else {
                        cout << "Insufficient Balance!\n";
                    }
                    break;
                }

                if (i == n - 1)
                    cout << "Account not found!\n";
            }
            break;

        case 4:
            if (n == 0) {
                cout << "No accounts found.\n";
            } else {
                cout << "\nAccount Details\n";
                cout << "-----------------------------------------\n";
                cout << "Acc No\tName\tBalance\n";
                cout << "-----------------------------------------\n";

                for (int i = 0; i < n; i++) {
                    cout << acc[i].accountNo << "\t"
                         << acc[i].name << "\t"
                         << acc[i].balance << endl;
                }
            }
            break;

        case 5:
            cout << "Thank you for using the Bank Account Management System.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct BankAccount {
    int accountNo;
    string name;
    float balance;
};

int main() {
    BankAccount acc;
    int choice;
    float amount;

    cout << "===== Bank Account Management System =====\n";

    cout << "Enter Account Number: ";
    cin >> acc.accountNo;

    cout << "Enter Account Holder Name: ";
    cin >> acc.name;

    cout << "Enter Initial Balance: ";
    cin >> acc.balance;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            acc.balance += amount;
            cout << "Amount Deposited Successfully!\n";
            cout << "Current Balance: " << acc.balance << endl;
            break;

        case 2:
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            if (amount <= acc.balance) {
                acc.balance -= amount;
                cout << "Withdrawal Successful!\n";
                cout << "Remaining Balance: " << acc.balance << endl;
            } else {
                cout << "Insufficient Balance!\n";
            }
            break;

        case 3:
            cout << "\n----- Account Details -----\n";
            cout << "Account Number : " << acc.accountNo << endl;
            cout << "Account Holder : " << acc.name << endl;
            cout << "Current Balance: " << acc.balance << endl;
            break;

        case 4:
            cout << "Thank you for using the Bank Account System.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
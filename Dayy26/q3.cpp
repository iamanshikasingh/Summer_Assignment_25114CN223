#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000, amount;

    cout << "===== ATM Menu =====" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Your Balance: " << balance;
    }
    else if (choice == 2) {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Updated Balance: " << balance;
    }
    else if (choice == 3) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance = balance - amount;
            cout << "Please collect your cash." << endl;
            cout << "Remaining Balance: " << balance;
        } else {
            cout << "Insufficient Balance.";
        }
    }
    else {
        cout << "Invalid Choice.";
    }

    return 0;
}
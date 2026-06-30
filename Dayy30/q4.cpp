#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int bookId[MAX];
string bookName[MAX];
string author[MAX];
int n = 0;

// Add Book
void addBook() {
    cout << "\nEnter Book ID: ";
    cin >> bookId[n];

    cout << "Enter Book Name: ";
    cin >> bookName[n];

    cout << "Enter Author Name: ";
    cin >> author[n];

    n++;
    cout << "Book Added Successfully!\n";
}

// Display Books
void displayBooks() {
    if (n == 0) {
        cout << "\nNo Books Available!\n";
        return;
    }

    cout << "\n----- Library Books -----\n";
    cout << "Book ID\tBook Name\tAuthor\n";

    for (int i = 0; i < n; i++) {
        cout << bookId[i] << "\t"
             << bookName[i] << "\t\t"
             << author[i] << endl;
    }
}

// Search Book
void searchBook() {
    int id;
    cout << "\nEnter Book ID to Search: ";
    cin >> id;

    for (int i = 0; i < n; i++) {
        if (bookId[i] == id) {
            cout << "\nBook Found!\n";
            cout << "Book ID    : " << bookId[i] << endl;
            cout << "Book Name  : " << bookName[i] << endl;
            cout << "Author     : " << author[i] << endl;
            return;
        }
    }

    cout << "Book Not Found!\n";
}

// Delete Book
void deleteBook() {
    int id;
    cout << "\nEnter Book ID to Delete: ";
    cin >> id;

    for (int i = 0; i < n; i++) {
        if (bookId[i] == id) {
            for (int j = i; j < n - 1; j++) {
                bookId[j] = bookId[j + 1];
                bookName[j] = bookName[j + 1];
                author[j] = author[j + 1];
            }

            n--;
            cout << "Book Deleted Successfully!\n";
            return;
        }
    }

    cout << "Book Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== MINI LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                deleteBook();
                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
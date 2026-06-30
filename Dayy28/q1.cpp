#include <iostream>
#include <string>
using namespace std;

struct Book {
    int bookId;
    string title;
    string author;
};

int main() {
    Book book[100];
    int n = 0, choice, searchId;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1.

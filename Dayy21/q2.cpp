#include <iostream>
using namespace std;

int main() {
    char str[100], rev[100];
    int len = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }

    rev[len] = '\0';  

    cout << "Reversed string: " << rev;

    return 0;
}
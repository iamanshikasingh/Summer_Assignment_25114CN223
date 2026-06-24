#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    // Step 1: Count frequency of each character
    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;
    }

    // Step 2: Find first repeating character
    bool found = false;
    for (int i = 0; i < str.length(); i++) {
        if (freq[(int)str[i]] > 1) {
            cout << "First repeating character: " << str[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No repeating character found" << endl;
    }

    return 0;
}
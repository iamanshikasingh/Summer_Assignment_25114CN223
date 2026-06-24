#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};  // for all ASCII characters

    // Count frequency
    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;
    }

    // Display frequency
    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}
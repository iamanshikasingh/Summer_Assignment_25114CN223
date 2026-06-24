#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not an anagram" << endl;
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; i < s1.length(); i++) {
        freq[(int)s1[i]]++;
    }

    for (int i = 0; i < s2.length(); i++) {
        freq[(int)s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Not an anagram" << endl;
            return 0;
        }
    }

    cout << "Strings are anagrams" << endl;

    return 0;
}
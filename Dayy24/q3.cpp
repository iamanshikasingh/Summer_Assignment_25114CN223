#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    string word = "", longest = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];
        } else {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        }
    }

    // check last word
    if (word.length() > longest.length()) {
        longest = word;
    }

    cout << "Longest word: " << longest << endl;

    return 0;
}
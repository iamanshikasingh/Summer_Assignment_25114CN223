#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int count = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && inWord == false) {
            inWord = true;
            count++;
        }
        else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words: " << count << endl;

    return 0;
}
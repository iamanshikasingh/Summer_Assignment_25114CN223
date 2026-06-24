#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;
    }

    char maxChar = str[0];
    int maxCount = 0;

    // Find maximum occurring character
    for (int i = 0; i < str.length(); i++) {
        if (freq[(int)str[i]] > maxCount) {
            maxCount = freq[(int)str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}
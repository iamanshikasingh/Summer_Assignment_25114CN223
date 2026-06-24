#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++) {
        if (freq[(int)str[i]] == 0) {
            result += str[i];
            freq[(int)str[i]] = 1;
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
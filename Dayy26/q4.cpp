#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "===== Quiz Application =====\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. Which language is used for C++ programming?\n";
    cout << "1. C++\n2. Java\n3. Python\n4. HTML\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\nYour Score: " << score << " out of 3";

    return 0;
}
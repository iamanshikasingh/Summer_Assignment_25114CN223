#include <iostream>
using namespace std;

int main() {
    int number = 50, guess;

    cout << "Guess the number (1 to 100): ";
    cin >> guess;

    if (guess == number)
        cout << "Correct! You guessed the number.";
    else if (guess < number)
        cout << "Too low!";
    else
        cout << "Too high!";

    return 0;
}

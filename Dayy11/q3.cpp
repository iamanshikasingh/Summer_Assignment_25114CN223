#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if(number <= 1)
        return false;

    for(int i = 2; i <= number / 2; i++)
    {
        if(number % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPrime(num))
        cout << num << " is a Prime Number";
    else
        cout << num << " is not a Prime Number";

    return 0;
}
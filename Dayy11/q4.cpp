#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact =fact*i;
    }

    return fact;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num < 0)
    {
        cout << "Factorial is not calculated for negative";
    }
    else
    {
        cout << "Factorial = " << factorial(num);
    }

    return 0;
}
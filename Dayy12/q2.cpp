#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int n)
{
    int original = n;
    int digits = 0, sum = 0;
    int temp = n;

    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp > 0)
    {
        int d = temp % 10;
        int power = 1;

        for(int i = 1; i <= digits; i++)
        {
            power = power * d;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    return sum == original;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(armstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
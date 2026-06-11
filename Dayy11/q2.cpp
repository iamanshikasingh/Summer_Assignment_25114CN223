#include <iostream>
using namespace std;

int maxvalue(int x, int y)
{
    int maximum = x;

    if(y > x)
    {
        maximum = y;
    }

    return maximum;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Maximum number is: " << maxvalue(num1, num2);

    return 0;
}
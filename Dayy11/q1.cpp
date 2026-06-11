#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

int main()
{
    int firstnum, secondnum;
    cout << "Enter the two numbers: ";
    cin >> firstnum >> secondnum;

    cout << "Sum of two numbers is = " << addition(firstnum, secondnum);

    return 0;
}

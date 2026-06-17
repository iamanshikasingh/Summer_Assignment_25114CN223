#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the required sum: ";
    cin >> sum;

    cout << "Pairs are:" << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                cout << "(" << a[i] << ", " << a[j] << ")" << endl;
            }
        }
    }

    return 0;
}
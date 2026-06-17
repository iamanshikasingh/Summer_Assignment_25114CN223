#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int j = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    // Fill remaining positions with 0
    while (j < n)
    {
        a[j] = 0;
        j++;
    }

    cout << "Array after moving zeroes to end: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
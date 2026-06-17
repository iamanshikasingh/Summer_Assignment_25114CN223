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

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = -1;   // Mark as visited
            }
        }

        if (count > 0 && a[i] != -1)
            cout << a[i] << " ";
    }

    return 0;
}
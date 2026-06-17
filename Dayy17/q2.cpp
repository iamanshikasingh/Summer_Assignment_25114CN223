#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter number of elements in first array: ";
    cin >> n1;

    int a[n1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter number of elements in second array: ";
    cin >> n2;

    int b[n2];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    cout << "Union of arrays: ";

    // Print unique elements of first array
    for (int i = 0; i < n1; i++)
    {
        int flag = 0;

        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << a[i] << " ";
    }

    // Print elements of second array if not already printed
    for (int i = 0; i < n2; i++)
    {
        int flag = 0;

        for (int j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (b[i] == b[j])
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                cout << b[i] << " ";
        }
    }

    return 0;
}
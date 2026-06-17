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

    int maxFreq = 0, maxElement;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        if (a[i] == -1)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = -1;   // Mark as counted
            }
        }

        if (count > maxFreq)
        {
            maxFreq = count;
            maxElement = a[i];
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}
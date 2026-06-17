#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a[n - 1];

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += a[i];

    int total = n * (n + 1) / 2;

    int missing = total - sum;

    cout << "Missing number is: " << missing;

    return 0;
}

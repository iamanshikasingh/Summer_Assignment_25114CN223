#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print increasing characters
        for(char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            cout << ch;
        }

        // Print decreasing characters
        for(char ch = 'A' + i - 2; ch >= 'A'; ch--)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}
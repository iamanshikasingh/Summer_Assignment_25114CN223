#include <stdio.h>
int main()
{
    int n, b = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            b++;
        }
        n = n / 2;
    }

    printf("Number of set bits = %d", b);

    return 0;
}
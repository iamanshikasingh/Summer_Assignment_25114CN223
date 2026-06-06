#include <stdio.h>
int main()
{
    int n, b = 0, c, d = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n> 0)
    {
        c = n % 10;
        b = b + c * d;
        d = d * 2;
        n = n / 10;
    }

    printf("Decimal number = %d", b);

    return 0;
}
#include <stdio.h>
int main()
{
    int n, a[32], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary number :");

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}

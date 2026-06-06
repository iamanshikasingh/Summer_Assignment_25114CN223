#include <stdio.h>
int main()
{
    int x, n, i;
    int p = 1;

    printf("Enter number and power ");
    scanf("%d%d", &x, &n);

    for(i = 1; i <= n; i++)
    {
        p = p * x;
    }

    printf("Answer to the power = %d", p);

    return 0;
}

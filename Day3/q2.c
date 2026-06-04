#include<stdio.h>

int main()
{
    int a, b, i, j, count;

    printf("Enter starting number: ");
    scanf("%d", &a);

    printf("Enter ending number: ");
    scanf("%d", &b);

    for(i = a; i <= b; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }

    return 0;
}
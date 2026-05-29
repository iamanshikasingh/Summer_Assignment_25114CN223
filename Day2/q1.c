#include<stdio.h>
int main()
{
    int n,sum=0,d;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("sum of digits is%d",sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int rev=0,n,d;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("Reverse of a number is %d",rev);
    return 0;
}
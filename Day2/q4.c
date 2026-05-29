#include<stdio.h>
int main()
{
    int temp,n,d,num=0;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        num=num*10+d;
        n=n/10;
    }
    if(temp==num)
    {
    printf("number is palindrome");
    }
    else
    {
      printf("number is not paalindrome");
    }
    return 0;
}
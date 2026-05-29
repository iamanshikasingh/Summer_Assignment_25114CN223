#include<stdio.h>
int main()
{
    int i,f=1,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    f=f*i;
}
printf("factoriaal of number is %d",f);
return 0;
}
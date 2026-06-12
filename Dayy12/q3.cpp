#include<iostream>
using namespace std;

int fib(int n)
{
    int a=0,b=1,c;
    for (int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;

    cout<<"enter number of terms";
    cin>>n;
    fib(n);

    return 0;
}
#include<iostream>
using namespace std;
void fact(int n,int answer=1)
{
    if(n==0||n==1)
    {
        cout<<answer;
        return;
    }
    fact(n-1,answer*n);
}
int main()
{
    int n;
    cout<<"enternumber";
    cin>>n;
    cout<<"factorial of the number is ";
    fact(n);
    return 0;
}
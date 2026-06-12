#include<iostream>
using namespace std;

int perfect (int n)
{
    int sum =0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    return 1;
    else
    return 0;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if(perfect(n))
    cout<<"it is perfect number";
    else
    cout<<"it is not a perfect number";
return 0;
}
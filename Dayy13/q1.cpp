#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"enter the no. of elements";
    cin>> n;

    int a[n];
    cout <<"enter the elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
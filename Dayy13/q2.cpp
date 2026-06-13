#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    float avg;

    cout<<"enter no. of elements";
    cin>>n;
    int a[n];

    cout<<"enter the elements";
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    avg=sum/n;

    cout<<"sum of numbers is "<<sum<<endl;
    cout<<"average of the numbers "<<avg;

    return 0;

}
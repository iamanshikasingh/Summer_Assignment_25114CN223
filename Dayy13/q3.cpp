#include<iostream>
using namespace std;

int main(){
    int n,i,largest,smallest;
    cout<<"enter the number of elements";
    cin>>n;

    int a[n];
    cout<<"enter the elements";
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    largest =a[0];
    smallest=a[0];
    for (i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<"the largset number is  "<<largest<<endl;
    cout<<"the smallest number is  "<<smallest;
    return 0;
}
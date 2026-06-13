#include<iostream>
using namespace std;

int main(){
    int n,i,even=0,odd=0;
    cout<<"enter the number of elements";
    cin>>n;
    int a[n];
    cout<<"enter the elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
        }
        cout<<"the total number of even numbers is "<<even<<endl;
        cout<<"the total number of odd number is "<<odd;
        return 0;
    }
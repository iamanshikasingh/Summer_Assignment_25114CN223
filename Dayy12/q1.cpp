#include<iostream>
using namespace std;

int palindrome(int n){
    int original=n;
    int rev=0;

    while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return original==rev;
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    if(palindrome(n)){
    cout<<"It is palindrome number";}
    else{
    cout<<"not a palindrome number";}
return 0;
}

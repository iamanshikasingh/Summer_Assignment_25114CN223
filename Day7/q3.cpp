#include<iostream>
using namespace std;

int sumDigits(int n){
    if(n==0){
         return 0;
    }
return (n%10)+sumDigits(n/10);
}
int main()
{
    int num;

    cout<<"enter a number:";
    cin>>num;
    cout<<"sum of digits is:"<<
    sumDigits(num);
    return 0;
}

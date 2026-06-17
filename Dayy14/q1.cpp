#include <iostream>
using namespace std;

int main(){
    int n,i,position=-1,key;

    cout<<"enter the number of elements";
    cin>>n;

    int a[n];
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element you have to search";
    cin>>key;

    for(i=0;i<n;i++){
        if(a[i]==key){
            position=i;
            break;
        }
    }
    if(position==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element is at position"<<position+1;
    }
    return 0;
}

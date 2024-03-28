#include<iostream>
using namespace std;
int main(){
    int arr[10],pos,n;
    cout<<"enter size of n :";
    cin>>n;
    cout<<"enter a position :";
    cin>>pos;
    cout<<"enter element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=pos-1;i--){
        arr[i-1]=arr[i];
    }
    n--;
    for(int i=0;i<n;i++){
    cout<<"the element is :"<<arr[i]<<endl;
    }
    return 0;
}
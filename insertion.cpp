#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter Element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to add first index :";
    cin>>x;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
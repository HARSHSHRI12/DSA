#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    int count=0;
    int val;
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
             arr[i]=arr[j]=-1 ;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            val=arr[i];
            count++;
        }
    }
    cout<<"The same number is :"<<count<< "value is :"<<val<<endl;

    return 0;
    
}
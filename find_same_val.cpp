#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    int count=0;
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
              count++;
            }
        }
    }
    cout<<"The same number is :"<<count<<endl;
    return 0;
}
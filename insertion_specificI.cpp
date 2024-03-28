    #include<iostream>
    using namespace std;
    int main(){
        int arr[10],n,pos,x;
        cout<<"enter size of element :";
        cin>>n;
        cout<<"enter element : ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"enter a position to insert : ";
        cin>>pos;
        cout<<"enter element :";
        cin>>x;
        for(int i=n-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos]=x;
        n++;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
        }
        return 0;
    }
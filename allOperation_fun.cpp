#include<iostream>
using namespace std;
//Traversing function 

void traverse(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Traverse array wait........\n";
     for(int i=0;i<n;i++){
        cout<<"Element is :"<<arr[i]<<"At index:"<<i<<endl;
    }
}

//insertion function 

    void insertion(){
         int n,pos,x;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"Enter position to insert element an array :";
   cin>>pos;

   cout<<"Enter Element to insert an array :";
   cin>>x;
   for(int i=n-1;i>pos-1;i--){
    arr[i+1]=arr[i];  
   }
    
   arr[pos]=x;
   n++;
   for(int i=0;i<n;i++){
        cout<<"Element is :"<<arr[i]<<"At index :"<<i<<endl;
    }
    }

    //deletion function 

    void deletion(){
         int n,pos;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"Enter position to Delete element an array :";
   cin>>pos;
   for(int i=pos-1;i<n-1;i++){
    arr[i]=arr[i+1];
   }
   n--;
    for(int i=0;i<n;i++){
        cout<<"Element is :"<<arr[i]<<"At index :"<<i<<endl;
    }
    }

    //searching function 

    void searching(){

         int n,x;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"Enter Element to Search  an array :";
   cin>>x;
   for(int i=0;i<n;i++){
    if(arr[i]==x){
        cout<<"Element "<<x<<"is find at index:"<<i<<endl;
    }
   }
  
}

//Start main function ....

int main(){
    string select;
    cout<<"Hello Welcome to Array operations point\n";
    cout<<"-----------------------------------------\n";
    cout<<"1=> Traversing\n";
    cout<<"2=> Insertion\n";
    cout<<"3=> Deletion\n";
    cout<<"4=> Searching\n\n";
   cout<<"What do you want to do ?\n";
    cin>>select;
    if(select=="Traversing"){
        traverse();
    }
     if(select=="Insertion"){
        insertion();
    }
     if(select=="Deletion"){
        deletion();
    }
     if(select=="Searching"){
        searching();
    }   
return 0;

}
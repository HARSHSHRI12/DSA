// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//  cout<<sizeof(arr)/sizeof(arr[0])<<endl;
//  //cout<<sizeof(arr[0])<<endl;
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------
                                        // traversing
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int size=sizeof(arr)/sizeof(0);
//     for(int i=0;i<size;i++){
//     cout<< arr[i];
//     cout<<i<<endl;
//     }
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------
                                        // traversing(use of for each):-

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,7,5,8};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int ele:arr){
//         cout<<ele<<endl;
//     }
// return 0;
    
// }

//----------------------------------------------------------------------------------------------------------------
                                        // traversing(use of while loop):-
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     while(i<size){
//         cout<<arr[i]<<endl;
//         i++;
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
                                              //  for take a input in traversing
// #include<iostream>
// using namespace std;
// int main(){
//     char vowel[5];
//     for(int i=0;i<5;i++){
//         cin>>vowel[i];
//     }
//     for(int i=0;i<5;i++){
//         cout<<vowel[i]<<" ";
//     }
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------
                                        //using for each input in traversing
// #include<iostream>
// using namespace std;
// int main(){
//     char vowel[5];
//     for(char & val:vowel){
//         cin>>val;
//     }
//     for(char & val:vowel){
//         cout<<val<<" ";
//     }
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------
                                              //using while loop
// #include<iostream>
// using namespace std;
// int main(){
//     char vowel[5];
//     int i=0;
//     while(i<5){
//         cin>>vowel[i];
//         i++;
//     }
//     cout<<vowel[i]>>" ";
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------
                                            //sum of array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,10,2,3,4};
//     int sum=0;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//    cout<<sum<<endl;
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------
                                        //maximum number in array
// #include<iostream>
//  using namespace std;
//   int main(){
//   int arr[]={1,2,3,4,18,17};
//   int max=arr[0];
//   int size=sizeof(arr)/sizeof(arr[0]);
//   for(int i=0;i<size;i++){
//   if(arr[i]>max){
//        max=arr[i];
//     }
//   }
//   cout<<max<<endl;
//   return 0;
//   }

//---------------------------------------------------------------------------------------------------------------------
                                             // linear search
#include<iostream>
 using namespace std;
  int main(){
  int arr[]={1,2,3,4,18,17};
  int x=18;
  int ans=-1;
  int size=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
    if(arr[i]==x){
        ans=i;
       
    }
  }
  cout<<ans<<endl;
  return 0;
  }
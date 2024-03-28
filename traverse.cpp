#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>traverse;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        traverse.push_back(element);
    }
    for(int i=0;i<traverse.size();i++){
        cout<<"Element is :"<<traverse[i]<<"is index="<<i<<" "<<endl;
    }
    traverse.insert(traverse.begin()+2,45);
    //after update print the updated value;
    traverse.erase(traverse.end()-2);
    //and then re-enter the updated value
    return 0;
}
//for each loop

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> traverse;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        traverse.push_back(element);
    }
    for(int element:traverse){
    cout<<"elenent is :"<<element<<endl;
    }
    return 0;
}
//while loop
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> traverse;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        traverse.push_back(element);
    }
    int indx=0;
    while(indx<traverse.size()){
        cout<<"element is :"<<traverse[indx++]<<endl;
    }
    return 0;
}*/


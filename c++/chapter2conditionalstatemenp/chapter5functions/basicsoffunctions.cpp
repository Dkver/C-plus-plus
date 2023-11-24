// for reduce the repetations problems
#include<iostream>
using namespace std;
// int main(){
    // int n;
    // cout<<"enter the value of n:";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    void usa(){
        cout<<"you are in usa"<<endl;
    }
    void india(){
        cout<<"you are in india"<<endl;
        return;       // return statement are write in wetween the function  then the function are end with there
    }
    int main(){
        cout<<"you are in main"<<endl;
        india();
        cout<<"hey"<<endl;
        usa();
    }
    // main ek hi baar aata hai
    // start with main
    // unlimited functions are made and call

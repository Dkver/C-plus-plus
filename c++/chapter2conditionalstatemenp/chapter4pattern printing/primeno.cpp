#include<iostream>
using namespace std;
int main(){
    int n;      // i=no of rows and j=no of column
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<j*2-1<<" ";
       } 
       cout<<endl;
    }
    for(int i=1;i<=n;i++){
       for(int j=1;j<=2*i;j+=2){
        cout<<j<<" ";
       } 
       cout<<endl;
    }
    for(int i=1;i<=n;i++){
        int a=1;
       for(int j=1;j<=i;j++){
        cout<<a<<" ";
        a+=2;
       } 
       cout<<endl;
    }
}
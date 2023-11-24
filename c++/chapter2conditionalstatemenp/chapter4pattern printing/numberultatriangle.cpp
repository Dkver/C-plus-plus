#include<iostream>
using namespace std;
int main(){
    int n;      // i=no of rows and j=no of column
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n+1-i;j++){
        cout<<j<<" ";
       } 
       cout<<endl;
    }
}
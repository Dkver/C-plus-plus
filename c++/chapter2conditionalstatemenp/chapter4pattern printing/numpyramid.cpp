#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;                       // i=no of rows and j=no of column
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int m;                   // m=i no of rows
    cout<<"enter the value of m:";
    cin>>m;
    int n;                   // n=j no of column
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=100;i>=n;i--){
        cout<<i<<" ";
    }
}
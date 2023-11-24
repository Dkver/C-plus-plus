#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;         //n=90
    for(int i=65;i<=n;i++){
        cout<<i<<"->"<<(char)i<<endl;
    }
}
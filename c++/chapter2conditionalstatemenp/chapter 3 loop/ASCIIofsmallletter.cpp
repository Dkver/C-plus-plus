#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;      //n=122
    for(int i=97;i<=n;i++){
        cout<<i<<"->"<<(char)i<<endl;
    }
}
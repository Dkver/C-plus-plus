#include<iostream>
using namespace std;
int main(){
    int n,pro=1,x;
    cout<<"enter the value of n:";
    cin>>n;
    while(n>0){
        x=n%10;
        n=n/10;
        pro*=x;
    }
    cout<<pro;
}
#include<iostream>
using namespace std;
int main(){
    int n,r=0,x,g;
    cout<<"enter the value of n:";
    cin>>n;
    g=n;
    while(n!=0){
        x=n%10;
        r=r*10+x;
        n=n/10;
    }
    cout<<r<<endl;
    cout<<r+g;
}
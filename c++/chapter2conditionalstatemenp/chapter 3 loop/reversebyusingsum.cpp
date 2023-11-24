#include<iostream>
using namespace std;
int main(){
    int n,r=0,x;
    cout<<"enter the value of n:";
    cin>>n;
    while(n!=0){
        x=n%10;
        r=r*10+x;
        n=n/10;
    }
    cout<<r<<" ";

}
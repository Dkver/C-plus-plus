#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter the value of n:";
    cin>>n;
    while(n!=0){
        x=n%10;
        n=n/10;
        cout<<x<<" ";
    }

}
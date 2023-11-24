#include<iostream>
using namespace std;
int main(){
    int n,sum=0,x;
    cout<<"enter the value of n:";
    cin>>n;
    while(n>0){
        x=n%10;
        n=n/10;
        sum+=x;
    }
    cout<<sum;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int f=1;     // store karaunga highest factor
    for(int i=1;i<n;i++){
        if(n%i==0)  f=i;   
    }
    cout<<f;
}
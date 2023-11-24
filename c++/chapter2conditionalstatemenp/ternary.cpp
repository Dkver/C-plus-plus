#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";    // ternary operator
    cin>>n;
    (n%2==0) ?  cout<<"even" : cout<<"odd";
}
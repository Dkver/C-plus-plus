#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    if(n%3==0 || n%5==0){               // logical or ||
        cout<<"the number is divisible by 3 or 5:"<<n;
    }
    else{
        cout<<"the number is not divisible by 3 or 5";
    }
}
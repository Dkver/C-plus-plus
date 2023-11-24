#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";       // logical and &&
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"the number is divisible by both 3 and 5 is:"<<n;
    }
    else{

        cout<<"the number is not divisble by 3 and 5";
    }
}
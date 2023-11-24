#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the  number n:";
    cin>>n;
    if((n%5==0 || n%3==0) && (n%15!=0)){
        cout<<"number is divisible by 3 or 5 but not 15";
    }
    else{
        cout<<"number not satisfied";
    }
}
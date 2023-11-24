#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    // for(int i=1;i<=n;i+=2){    // 1st method
    //     cout<<i<<" ";
    // }
    // for(int i=1;i<=2*n-1;i+=2){    // 2nd method
    //     cout<<i<<" ";
    // }
    int a=4;
    for(int i=1;i<=n;i++){       // 3rd method
        cout<<a<<" ";
        a+=3;
    }
}
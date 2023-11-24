#include<iostream>
using namespace std;
int main(){
    int n ,i;
    cout<<"enter the value of n:";
    cin>>n;
    // for(i=1;i<=n;i++){       // method1
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    // }
    for(i=2;i<=n;i=i+2){
            cout<<i<<" ";
        }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<" ";
    }
}
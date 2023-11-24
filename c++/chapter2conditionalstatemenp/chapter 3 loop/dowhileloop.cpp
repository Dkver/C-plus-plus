#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int i=1;
    do{                 // first work then check
        cout<<i<<endl;
        i++;
    }
    while(i<=n);

}
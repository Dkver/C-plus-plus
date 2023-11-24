#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int nst=1;         // nst =no of stars
    int nsp=4;        // nsp=n-1  no of spaces
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        nsp=nsp-1;
        for(int j=1;j<=nst;j++){
            cout<<(char)(j+64)<<" ";
        }
        nst=nst+2;
        cout<<endl;
    }
}
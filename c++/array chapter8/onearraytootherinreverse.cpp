#include<iostream>
using namespace std;
int main(){
    int a[]={3,5,6,2,9};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];
        cout<<b[i]<<"   ";
    }
}
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={-10,-2,-3,-4,-5,-6};
    int n=sizeof(arr)/4;
    int mx= INT_MIN;//bc INT_MIN Is smallest value
    for(int i=1;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx;
}
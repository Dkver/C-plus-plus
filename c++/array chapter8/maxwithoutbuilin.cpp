#include<iostream>
using namespace std;
int main(){
    int arr[10]={12,13,15,14,10,9,81,8,17,6};
    int n=sizeof(arr)/4;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(mx < arr[i]){
            mx=arr[i]; //or use mx=max(mx,arr[i])
        }
    }
    cout<<mx;
}
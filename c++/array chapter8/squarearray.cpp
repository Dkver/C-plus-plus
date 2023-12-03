#include<iostream>
using namespace std;
int main(){
    int n ,sq;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sq=arr[i]*arr[i];
        cout<<sq<<endl;
    }
}
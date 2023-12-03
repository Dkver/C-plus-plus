#include<iostream>
using namespace std;
int main(){
    int n,x ;
    int count=0;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
        else{
            continue;
        }
    }
    cout<<count;
}
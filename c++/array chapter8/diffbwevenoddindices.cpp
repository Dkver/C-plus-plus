#include<iostream>
using namespace std;
int main(){
    int n,diff;
    int even=0;
    int odd=0;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            even=even+arr[i];
        }
        else{
            odd=odd+arr[i];
        }
    }
    diff=even-odd;
    cout<<diff;
}
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int  arr[3][3];
    cout<<"enter the values of matrix 1:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int mx=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mx<arr[i][j]){
                mx=arr[i][j];
            }
        }
    }
    cout<<mx;
    
}
//list of character
//list of integer
//list of float
#include<iostream>
using namespace  std;
int main(){
    int arr[5];
    cout<<"enter the element:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
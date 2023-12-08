#include<iostream>
using namespace std;
int main(){
    int arr[]={11,6,7,8,34,9,230,2,8};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
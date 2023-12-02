#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    cout<<sizeof(arr)<<endl;  // size of array
    cout<<sizeof(arr)/4<<endl;  // number of element in the array
    int n=sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}
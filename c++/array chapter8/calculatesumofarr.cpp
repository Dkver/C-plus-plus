#include<iostream>
using namespace std;
int main(){
    int arr[]={12,13,9,8,24};
    int sum=0;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";  // forward array
    }
    cout<<endl;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" "; //reverse array
}
    cout<<endl;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];   // sum of array
        
}
    cout<<sum;
}
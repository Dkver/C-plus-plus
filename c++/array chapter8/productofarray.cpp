#include<iostream >
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/4;
    int pro=1;
    for(int i=0;i<n;i++){
        pro=pro*arr[i];
    }
    cout<<pro;
}
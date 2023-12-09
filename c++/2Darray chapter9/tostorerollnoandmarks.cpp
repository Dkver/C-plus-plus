#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{12,87},{14,96},{15,82},{16,98}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
           
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
       
    }
}
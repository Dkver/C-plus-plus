#include<iostream>
using namespace std;
int main(){
    int  a[3][3];
    cout<<"enter the values of matrix 1:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     int b[3][3];
    cout<<"enter the values of matrix 2:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
}
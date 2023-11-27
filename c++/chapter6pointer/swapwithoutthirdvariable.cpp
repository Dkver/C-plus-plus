#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y<<endl;
}
#include<iostream>
using namespace std;
void swap(int& x, int& y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}
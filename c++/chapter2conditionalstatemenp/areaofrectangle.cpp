#include<iostream>
using namespace std;
int main(){
    int l,b, a, p;
    cout<<"enter the value of l :";
    cin>>l;
    cout<<"enter the value of b:";
    cin>>b;
    a=l*b;
    cout<<a<<endl;
    p=2*(l+b);
    cout<<p<<endl;
    if(a>p){
        cout<<"a is greater then p is:"<<a;
    }
    else{
        cout<<p;
    }
}
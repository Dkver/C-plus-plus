#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the 1st number a:";
    cin>>a;
    cout<<"enter the 2nd number b:";
    cin>>b;
    cout<<"enter the 3rd number c:";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greatest";
    }
    else if(b>c && b>a){
        cout<<"b is greatest";
    }
    else{
        cout<<"c is greatest";
    }
}
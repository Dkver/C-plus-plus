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
    // a>b and b>c -> a>c  -> a is greatest
    if(a>b){   // b can never be the greatest
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{     // c>a , a>b -> c>a>b
            cout<<c<<" is greatest ";
        }
    }
    else{    // b>a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{    //  c>b,  c>b>a
            cout<<c<<" is greatest ";
        }
    }
}
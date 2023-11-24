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
    if(a<b && a<c){
        cout<<"a is smallest";
    }
    else if(b<a && b<c){
        cout<<"b is smallest";
    }
    else{
        cout<<"c is smallest";
    }
}
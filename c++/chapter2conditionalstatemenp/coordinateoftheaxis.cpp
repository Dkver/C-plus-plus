#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    if(x>0 && y>0){
        cout<<"1st quadrant";
    }
    else if(x<0 && y>0){
        cout<<"2nd quadrant";
    }
    else if(x<0 && y<0){
        cout<<"3rd quadrant";
    }
    else{
        cout<<"4th quadrant";
    }
}

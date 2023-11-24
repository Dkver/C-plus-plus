#include<iostream>
using namespace std;
int main(){
    int x=3,y,z;
    y=x=10;          // assignment operator operate from right to left
    z=x<10;          // z=0 due to conditional operator
    cout<<x<<" "<<y<<" "<<z;
}

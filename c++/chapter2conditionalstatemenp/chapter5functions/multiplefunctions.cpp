#include<iostream>
using namespace std;
void usa(){
    cout<<"you are in usa"<<endl;
    return;
}
void india(){
    cout<<"you are in india"<<endl;
    usa();     // calling function are above the call
}
int main(){
    cout<<"you are in main"<<endl;
    india();
    return 0;
}
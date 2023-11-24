#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    bool flag=true;     //true means prime       // true=1,false=0
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;  // false means composite
            break;    // to get out of the code
        }
    }
    if(n==1)  cout<<"neither prime nor composite";
    else if(flag==true)  cout<<"prime";
    else   cout<<"composite";
}
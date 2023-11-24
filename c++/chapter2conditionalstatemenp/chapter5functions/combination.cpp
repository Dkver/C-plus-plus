#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,r, facta=1,factb=1,factr=1,c;  // facta=fact of n ,factb= fact of n-r,factc=fact of r     c is combination    // n>=r
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"entr the value of r:";
    cin>>r;
    for(int i=1;i<=n;i++){
        facta*=i;
    }
     cout<<facta<<endl;             // b=n-r
    for(int i=1;i<=(n-r);i++){
        factb*=i;
    }
    cout<<factb<<endl;
    for(int i=1;i<=r;i++){
        factr*=i;
    }
     cout<<factr<<endl;
    c=facta/(factb*factr);
    cout<<c<<endl;
}
#include<iostream>
using namespace std;
int main(){
    string s="deepak";
    cout<<s<<" "<<s.length()<<endl;
    s=s+" verma";                //s.append(" verma");
    cout<<s<<endl;
    s=" verma"+s;
    cout<<s<<endl;
}
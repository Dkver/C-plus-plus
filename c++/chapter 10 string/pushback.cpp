#include<iostream>
using namespace std;
int main(){
    string s="deepak";
    cout<<s<<endl;
    s.append(" verma");// for adding new string in the previous string
    cout<<s<<endl;
    s.push_back('v');  //adding 1character in the back
    cout<<s<<endl;
    s.push_back('g');
    cout<<s<<endl;
    s.pop_back();  // removing 1 character from back
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;   //s.length() use forcounting length of string
    s.clear();       // it is for empty the string
    cout<<s<<endl;
}
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string :";  // string is character array
    // cin>>s;   // there is problem after taking gap b/w two words/
    getline(cin,s);     //use for complete printing
    cout<<s;
}
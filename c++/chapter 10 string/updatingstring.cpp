#include<iostream>
using namespace std;
int main(){
    string s="deepak verma is a good student";
    cout<<s<<endl;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;
}
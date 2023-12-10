#include<iostream>
using namespace std;
int main(){
    string s="deepak verma";
    cout<<s<<endl;
    int n=s.length();
    int i=0;
    int j=n-1;
        while(i<j){
            int temp=s[j];
            s[j]=s[i];
            s[i]=temp;
            i++;
            j--;
    }
    cout<<s;
}
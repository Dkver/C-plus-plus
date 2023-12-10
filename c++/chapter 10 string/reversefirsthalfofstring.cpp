#include<iostream>
using namespace std;
int main(){
    string s="deepak";
    cout<<s<<endl;
    int n=s.length();
    int i=0;
    int j=n/2-1;   // n is always even
        while(i<j){
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
    }
    cout<<s<<endl;
}
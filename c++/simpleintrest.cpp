#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    printf("enter the value of p:");
    scanf("%f",&p);
    printf("enter the value of r:");
    scanf("%f",&r);
    printf("enter the value of t:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    cout<<"simple intrest is: ";
    cout<<si<<endl;
}
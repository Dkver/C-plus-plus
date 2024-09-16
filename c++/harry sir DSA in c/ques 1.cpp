#include<stdio.h>
void func1(int array[],int length){
     int sum=0;
     int prod=1;
     for(int i=0;i<length;i++){
        sum+=array[i];

     }
     for(int i=0;i<length;i++){
        prod*=array[i];
        
     }
}
int main(){
    int array[]={3,5,66};
    func1(array,3);
    return 0;
}
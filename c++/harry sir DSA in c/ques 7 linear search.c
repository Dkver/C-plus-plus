#include<stdio.h>
int LinearSearch(int arr[],int s,int ele){
    for(int i=0;i<s;i++){
        if(arr[i]==ele){
            return i;
        }
        
    }
    return -1;
    
}

int main(){
    int arr[100]={7,8,12,27,88};
    int s=sizeof(arr)/sizeof(int);
    int ele=7;
    int searchindex=LinearSearch(arr,s,ele);
    printf("the element %d is found at index %d \n",ele,searchindex);
    return 0;
    
}
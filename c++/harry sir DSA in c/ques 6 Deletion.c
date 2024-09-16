#include<stdio.h>
void display(int arr[],int size){
    //code for traversal
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// code for deletion
void IndDeletion(int arr[],int size,int index){
    
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    
    
}
int main(){
    int arr[100]={7,8,12,27,88};
    int size=5,  index=1; 
    display(arr,size);
    IndDeletion(arr,size,index) ;// 100 is capacity of an array
    size-=1;
    display(arr,size);
    return 0;
    
}
#include<stdio.h>
int BinarySearch(int arr[],int s,int ele){
    int beg=0;
    int end=s-1;
    // keep searching until beg<=end
    while(beg<=end){
    int mid=(beg+end)/2;
    if(arr[mid]==ele){
        return mid;
    }
    if(arr[mid]>ele){
        end=mid-1;
    }
    else{
        beg=mid+1;
    }
    }
    return -1;
        
}
   
int main(){
    int arr[]={12, 13,23,27,54 ,56,78,105};
    int s=sizeof(arr)/sizeof(int);
    int ele;
    printf("enter the value of element:");
    scanf("%d",&ele);
    int SearchIndex=BinarySearch(arr,s,ele);
    printf("the element %d is found at index %d ",ele,SearchIndex);
}
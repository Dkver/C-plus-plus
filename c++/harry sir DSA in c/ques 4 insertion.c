#include<stdio.h>
void display(int arr[],int n){
    // traversal
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100];
    int n;            // n is less then 100(n<100)
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    display(arr,n);
    return 0;
}
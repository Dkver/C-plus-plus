#include<stdio.h>
#include<stdlib.h>
struct myArray{ // reserving the memory
    int total_size;
    int used_size;
    int* ptr;// pointing to the first element of the array
};
void createArray(struct myArray* a,int tSize,int uSize){
    // (*a).total_size=tSize;
    // (*a).used_size=uSize;
    // (*a).ptr=(int*)malloc(tSize* sizeof(int));
    a->total_size=tSize;//the above code is same as this
    a->used_size=uSize;
    a->ptr=(int*)malloc(tSize* sizeof(int));// request the memory in the heap
}// malloc helps us to give the memory in the heap to conserve the values 
void show(struct myArray *a){
    for(int i=0;i<a->used_size;i++){
        printf("%d\n",(a->ptr)[i]);
    }
}
void setVal(struct myArray *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("enter element %d",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
int main(){
    struct myArray marks;// when it call then the compiler make the structure and reserve the memory for constructor make above
    createArray(&marks,100,20);// it tke the address of the marks and update it.
    printf("we are running set value \n");
    setVal(&marks);
    printf("we are running sho value \n");
    show(&marks);
    return 0;
}
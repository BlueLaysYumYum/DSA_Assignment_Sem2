#include <stdio.h>
void InsertArrayElem(int A[], int size, int elem,int pos){
    int i;
    if (pos==size){
        size++;
        A[pos]=elem;
    }
    else if(pos<size){
        size++;
        for (i=size;i>pos;i--){
            A[i]=A[i-1];
        }
        A[pos]=elem;
    }

    printf("New Array [",i);
    for (i=0;i<size;i++){
        printf("%d, ",A[i]);
    }
    printf("]\n");
    return;
}


int main (void){
    int A[50],i,size,elem,pos;
    printf("Input the size: ");
    scanf("%d",&size);
    printf("Input array elements\n");
    for (i=0;i<size;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&A[i]);
    }
    printf("Input the value you want to insert: ");
    scanf("%d",&elem);
    printf("Input the position where you want to insert: ");
    scanf("%d",&pos);
    InsertArrayElem(A, size, elem, pos);
    
}
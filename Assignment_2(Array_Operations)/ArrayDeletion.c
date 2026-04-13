#include <stdio.h>
void DeleteArrayElem(int A[], int size, int pos){
    int i;
    if (pos==size-1){
        size--;
    }
    else if(pos<size){
        for(i=pos;i<size-1;i++){
            A[i]=A[i+1];
        }
        size--;
    }
    printf("New Array [",i);
    for (i=0;i<size;i++){
        printf("%d, ",A[i]);
    }
    printf("]\n");
    return;
}

int main (void){
    int A[50],i,size,pos;
    printf("Input the size: ");
    scanf("%d",&size);
    printf("Input array elements\n");
    for (i=0;i<size;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&A[i]);
    }
    printf("Input the position which you want to delete: ");
    scanf("%d",&pos);
    DeleteArrayElem(A, size, pos);
    
}
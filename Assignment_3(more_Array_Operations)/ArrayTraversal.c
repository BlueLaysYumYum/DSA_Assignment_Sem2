#include <stdio.h>
void TraverseArray(int A[], int size){
    int i;
    printf("Array = [",i);
    for (i=0;i<size;i++){
        printf("%d, ",A[i]);
    }
    printf("]\n");
    return;
}


int main (void){
    int A[50],i,size;
    printf("Input the size: ");
    scanf("%d",&size);
    printf("Input array elements\n");
    for (i=0;i<size;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&A[i]);
    }
    TraverseArray(A, size);
    
}
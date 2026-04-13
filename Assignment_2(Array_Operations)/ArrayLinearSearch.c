#include <stdio.h>
void LinearSearch(int A[],int size,int val){
    int i;
    for (i=0;i<=size;i++){
        if (A[i]==val){
            printf("value is present at index %d",i);
            return;
        }
    }
    printf("value not found");
}
int main (void){
    int A[50],i,size,val;
    printf("Input the size: ");
    scanf("%d",&size);
    printf("Input array elements\n");
    for (i=0;i<size;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&A[i]);
    }
    printf("Input the value you want to search: ");
    scanf("%d",&val);
    LinearSearch(A, size, val);
    
}
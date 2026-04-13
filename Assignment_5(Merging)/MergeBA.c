#include <stdio.h>
void Merge(int A[],int size1,int B[],int size2){
    int C[100],i,j;
    for(i=0;i<size2;i++){
        C[i]=B[i];
    }
    for(j=0;j<size1;j++,i++){
        C[i]=A[j];
    }
    printf("Merged array is [");
    for(i=0;i<size1+size2;i++){
        printf("%d, ",C[i]);
    }
    printf("]");
}
int main(void){
    int A[50],size1,B[50],size2,i;
    printf("Input the size for Array A: ");
    scanf("%d",&size1);
    printf("Input array elements\n");
    for (i=0;i<size1;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&A[i]);
    }
    printf("Input the size for Array B: ");
    scanf("%d",&size2);
    printf("Input array elements\n");
    for (i=0;i<size2;i++){
        printf("Input for %dth index: ",i);
        scanf("%d",&B[i]);
    }
    Merge(A,size1,B,size2);
}
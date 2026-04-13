#include <stdio.h>
void Merge(int A[],int size1,int B[],int size2){
    int C[100],i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(A[i]<B[j]){
            C[k]=A[i];
            k++,i++;
        }
        else{
            C[k]=B[j];
            k++,j++;
        }
    }
    if(j==size2){
        for(i;i<size1;i++,k++){
            C[k]=A[i];
        }
    }
    else{
        for(j;j<size2;j++,k++){
            C[k]=B[j];
        }
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
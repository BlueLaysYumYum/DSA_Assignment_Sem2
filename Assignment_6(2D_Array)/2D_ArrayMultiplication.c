#include <stdio.h>
void MatrixMultiplication(int A[][20],int B[][20], int size){
    int i,j,k,C[20][20];
    printf("Array A:\n");
    for (i=0;i<size;i++){
        printf("[");
        for (j=0;j<size;j++){
            printf("%d ",A[i][j]);
        }
        printf("]\n");
    }
    printf("Array B:\n");
    for (i=0;i<size;i++){
        printf("[");
        for (j=0;j<size;j++){
            printf("%d ",B[i][j]);
        }
        printf("]\n");
    }
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            C[i][j]=0;
        }
    }
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            for(k=0;k<size;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("Array C:\n");
    for (i=0;i<size;i++){
        printf("[");
        for (j=0;j<size;j++){
            printf("%d ",C[i][j]);
        }
        printf("]\n");
    }
}
int main (void){
    int A[20][20],B[20][20],i,j,size;
    printf("Enter the size for the array: ");
    scanf("%d",&size);
    printf("Input Array elements for array A:\n");
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            printf("Enter for [%d][%d]th index: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Input Array elements for array B:\n");
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            printf("Enter for [%d][%d]th index: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    MatrixMultiplication(A,B,size);
}